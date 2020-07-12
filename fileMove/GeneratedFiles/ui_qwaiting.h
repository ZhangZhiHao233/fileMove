/********************************************************************************
** Form generated from reading UI file 'qwaiting.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWAITING_H
#define UI_QWAITING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QWaiting
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *QWaiting)
    {
        if (QWaiting->objectName().isEmpty())
            QWaiting->setObjectName(QStringLiteral("QWaiting"));
        QWaiting->resize(275, 61);
        gridLayout = new QGridLayout(QWaiting);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QWaiting);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QWaiting);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(QWaiting);

        QMetaObject::connectSlotsByName(QWaiting);
    } // setupUi

    void retranslateUi(QDialog *QWaiting)
    {
        QWaiting->setWindowTitle(QApplication::translate("QWaiting", "QWaiting", Q_NULLPTR));
        label->setText(QApplication::translate("QWaiting", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("QWaiting", "\346\255\243\345\234\250\347\247\273\345\212\250\344\270\255...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWaiting: public Ui_QWaiting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWAITING_H
