/********************************************************************************
** Form generated from reading UI file 'fileMove.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEMOVE_H
#define UI_FILEMOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileMoveClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_SelectText;
    QPushButton *pushButton_SelectSrc;
    QPushButton *pushButton_SelectDest;
    QPushButton *pushButton_StartMove;

    void setupUi(QWidget *fileMoveClass)
    {
        if (fileMoveClass->objectName().isEmpty())
            fileMoveClass->setObjectName(QStringLiteral("fileMoveClass"));
        fileMoveClass->resize(600, 400);
        layoutWidget = new QWidget(fileMoveClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 140, 407, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_SelectText = new QPushButton(layoutWidget);
        pushButton_SelectText->setObjectName(QStringLiteral("pushButton_SelectText"));

        horizontalLayout->addWidget(pushButton_SelectText);

        pushButton_SelectSrc = new QPushButton(layoutWidget);
        pushButton_SelectSrc->setObjectName(QStringLiteral("pushButton_SelectSrc"));

        horizontalLayout->addWidget(pushButton_SelectSrc);

        pushButton_SelectDest = new QPushButton(layoutWidget);
        pushButton_SelectDest->setObjectName(QStringLiteral("pushButton_SelectDest"));

        horizontalLayout->addWidget(pushButton_SelectDest);

        pushButton_StartMove = new QPushButton(layoutWidget);
        pushButton_StartMove->setObjectName(QStringLiteral("pushButton_StartMove"));

        horizontalLayout->addWidget(pushButton_StartMove);


        retranslateUi(fileMoveClass);
        QObject::connect(pushButton_SelectText, SIGNAL(clicked()), fileMoveClass, SLOT(selectText()));
        QObject::connect(pushButton_SelectSrc, SIGNAL(clicked()), fileMoveClass, SLOT(selectSrc()));
        QObject::connect(pushButton_SelectDest, SIGNAL(clicked()), fileMoveClass, SLOT(selectDest()));
        QObject::connect(pushButton_StartMove, SIGNAL(clicked()), fileMoveClass, SLOT(startMove()));

        QMetaObject::connectSlotsByName(fileMoveClass);
    } // setupUi

    void retranslateUi(QWidget *fileMoveClass)
    {
        fileMoveClass->setWindowTitle(QApplication::translate("fileMoveClass", "fileMove", Q_NULLPTR));
        pushButton_SelectText->setText(QApplication::translate("fileMoveClass", "\351\200\211\346\213\251text", Q_NULLPTR));
        pushButton_SelectSrc->setText(QApplication::translate("fileMoveClass", "\351\200\211\346\213\251\346\272\220\347\233\256\345\275\225", Q_NULLPTR));
        pushButton_SelectDest->setText(QApplication::translate("fileMoveClass", "\351\200\211\346\213\251\347\233\256\346\240\207\347\233\256\345\275\225", Q_NULLPTR));
        pushButton_StartMove->setText(QApplication::translate("fileMoveClass", "\345\274\200\345\247\213\347\247\273\345\212\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fileMoveClass: public Ui_fileMoveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEMOVE_H
