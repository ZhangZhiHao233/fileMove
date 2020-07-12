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
	this->setWindowTitle(QString::fromLocal8Bit("�ļ��ƶ�"));
}

void fileMove::selectText()
{
	m_fileList.clear();
	QString filePath = QFileDialog::getOpenFileName(this);
	if (filePath.isEmpty())
	{
		QMessageBox::warning(this, QStringLiteral("��ʾ"), QString::fromLocal8Bit("����ʧ�ܣ�"));
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
	QMessageBox::warning(this, QStringLiteral("��ʾ"), QString::fromLocal8Bit("������%1��ͼƬ!").arg(iSize));
}

void fileMove::selectSrc()
{
	m_Src = QFileDialog::getExistingDirectory(this, QStringLiteral("ѡ��ԴĿ¼"), "/");
	//m_Src = QString::fromLocal8Bit(temp.toStdString().c_str());
}

void fileMove::selectDest()
{
	m_Dest = QFileDialog::getExistingDirectory(this, QStringLiteral("ѡ��Ŀ��Ŀ¼"), "/");
	//m_Dest = QString::fromLocal8Bit(temp.toStdString().c_str());
}

void fileMove::startMove()
{
	if (m_Dest.isEmpty() || m_Src.isEmpty() || m_fileList.isEmpty())
	{
		QMessageBox::warning(this, QStringLiteral("��ʾ"), QString::fromLocal8Bit("����ѡ���Ҫ������"));
		return;
	}

	QString srcFileName;
	QString destFileName;
	int iSucceed = 0;

	/*��ͼ��ʾ*/
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


	QApplication::setOverrideCursor(Qt::WaitCursor);//�������Ϊ�ȴ�״̬
	QProgressDialog progress;
	progress.setWindowTitle(QString::fromLocal8Bit("��ʾ"));
	progress.setLabelText(QString::fromLocal8Bit("�����ƶ���..."));
	progress.setCancelButtonText(QString::fromLocal8Bit("ȡ��"));
	progress.setRange(0, m_fileList.size());//���÷�Χ
	progress.setModal(true);//����Ϊģ̬�Ի���
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

		//�û�ȡ���Ļ�����ֹ
		if (progress.wasCanceled())
		{
			break;
		}

		QCoreApplication::processEvents(QEventLoop::ExcludeUserInputEvents);
		//QCoreApplication::processEvents();
	}
	QApplication::restoreOverrideCursor();
	progress.close();
	QMessageBox::warning(this, QStringLiteral("��ʾ"), QString::fromLocal8Bit("���ƶ�%1���ļ���").arg(iSucceed));
}

