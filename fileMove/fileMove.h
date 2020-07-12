#pragma once

#include <QtWidgets/QWidget>
#include "ui_fileMove.h"
#include <QStringList>

class fileMove : public QWidget
{
    Q_OBJECT

public:
    fileMove(QWidget *parent = Q_NULLPTR);

private:
    Ui::fileMoveClass ui;

	QStringList m_fileList;
	QString m_Src;
	QString m_Dest;


private slots:
	void selectText();
	void selectSrc();
	void selectDest();
	void startMove();
};
