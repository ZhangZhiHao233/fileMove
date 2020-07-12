#pragma once

#include <QDialog>
#include "ui_qwaiting.h"
#include <QMovie>

class QWaiting : public QDialog
{
	Q_OBJECT

public:
	QWaiting(QWidget *parent = Q_NULLPTR);
	~QWaiting();

private:
	Ui::QWaiting ui;

	QMovie * m_Move;
};
