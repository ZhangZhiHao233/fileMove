#include "qwaiting.h"
#include <QMovie>

QWaiting::QWaiting(QWidget *parent)
	: QDialog(parent)
	, m_Move(NULL)
{
	ui.setupUi(this);

	//设置透明度
	this->setWindowOpacity(0.8);

	/* Qt::Dialog
	Indicates that the widget is a window that should be decorated as a dialog (i.e., typically no maximize or minimize buttons in the title bar). This is the default type for QDialog. If you want to use it as a modal dialog, it should be launched from another window, or have a parent and used with the QWidget::windowModality property. If you make it modal, the dialog will prevent other top-level windows in the application from getting any input. We refer to a top-level window that has a parent as a secondary window.
	*/

	/*Qt::FramelessWindowHint
	Produces a borderless window. The user cannot move or resize a borderless window via the window system. On X11, the result of the flag is dependent on the window manager and its ability to understand Motif and/or NETWM hints. Most existing modern window managers can handle this.
	*/

	/*Qt::WindowModal
	The window is modal to a single window hierarchy and blocks input to its parent window, all grandparent windows, and all siblings of its parent and grandparent windows.
	*/
	//取消对话框标题
	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//设置为对话框风格，并且去掉边框
	//setWindowModality(Qt::WindowModal);//设置为模式对话框，同时在构造该对话框时要设置父窗口
	ui.label->setStyleSheet("background-color: transparent;");
	m_Move = new QMovie(":/fileMove/wait.gif");
	ui.label->setMovie(m_Move);
	ui.label->setScaledContents(true);
	m_Move->start();
}

QWaiting::~QWaiting()
{
	m_Move->stop();
}