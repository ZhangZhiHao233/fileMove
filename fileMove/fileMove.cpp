#include "fileMove.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QTimer>
#include <QEventLoop>
#include "windows.h"
#include "qwaiting.h"

QProgressDialog *progDlg = NULL;
int currentValue = 0;
fileMove::fileMove(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("文件移动"));
}

void fileMove::selectText()
{
	m_fileList.clear();
	QString filePath = QFileDialog::getOpenFileName(this);
	if (filePath.isEmpty())
	{
		QMessageBox::warning(this, QStringLiteral("提示"), QString::fromLocal8Bit("加载失败！"));
		return;
	}

	QFile file(filePath);
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		while (!file.atEnd())
		{
			QByteArray line = file.readLine();
			QString str(line);
			m_fileList.append(str);
			QCoreApplication::processEvents(QEventLoop::ExcludeUserInputEvents);
		}
		file.close();
	}

	int iSize = m_fileList.size();
	QMessageBox::warning(this, QStringLiteral("提示"), QString::fromLocal8Bit("共加载%1个图片!").arg(iSize));
}

void fileMove::selectSrc()
{
	m_Src = QFileDialog::getExistingDirectory(this, QStringLiteral("选择源目录"), "/");
	//m_Src = QString::fromLocal8Bit(temp.toStdString().c_str());
}

void fileMove::selectDest()
{
	m_Dest = QFileDialog::getExistingDirectory(this, QStringLiteral("选择目标目录"), "/");
	//m_Dest = QString::fromLocal8Bit(temp.toStdString().c_str());
}

void fileMove::startMove()
{
	if (m_Dest.isEmpty() || m_Src.isEmpty() || m_fileList.isEmpty())
	{
		QMessageBox::warning(this, QStringLiteral("提示"), QString::fromLocal8Bit("请先选择必要参数！"));
		return;
	}

	QString srcFileName;
	QString destFileName;
	int iSucceed = 0;

	/*动图显示*/
	/*QWaiting *pQwait = new QWaiting(this);
	pQwait->show();

	for (int i = 0; i < m_fileList.size(); i++)
	{
		srcFileName = m_Src + "/" + m_fileList.at(i);
		destFileName = m_Dest + "/" + m_fileList.at(i);

		if (QFile::copy(srcFileName.simplified(), destFileName.simplified()))
		{
			iSucceed = iSucceed + 1;
		}

		QCoreApplication::processEvents(QEventLoop::ExcludeUserInputEvents);
	}

	pQwait->close();*/


	QApplication::setOverrideCursor(Qt::WaitCursor);//设置鼠标为等待状态
	QProgressDialog progress;
	progress.setWindowTitle(QString::fromLocal8Bit("提示"));
	progress.setLabelText(QString::fromLocal8Bit("正在移动中..."));
	progress.setCancelButtonText(QString::fromLocal8Bit("取消"));
	progress.setRange(0, m_fileList.size());//设置范围
	progress.setModal(true);//设置为模态对话框
	progress.show();
	for (int i = 0; i < m_fileList.size(); i++)
	{
		srcFileName = m_Src + "/" + m_fileList.at(i);
		destFileName = m_Dest + "/" + m_fileList.at(i);

		if (QFile::copy(srcFileName.simplified(), destFileName.simplified()))
		{
			progress.setValue(i);
			iSucceed = iSucceed + 1;
		}

		//用户取消的话则中止
		if (progress.wasCanceled())
		{
			break;
		}

		QCoreApplication::processEvents(QEventLoop::ExcludeUserInputEvents);
		//QCoreApplication::processEvents();
	}
	QApplication::restoreOverrideCursor();
	progress.close();
	QMessageBox::warning(this, QStringLiteral("提示"), QString::fromLocal8Bit("共移动%1个文件！").arg(iSucceed));
}

