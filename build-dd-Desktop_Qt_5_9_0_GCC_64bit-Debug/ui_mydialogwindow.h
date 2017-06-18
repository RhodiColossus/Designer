/********************************************************************************
** Form generated from reading UI file 'mydialogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOGWINDOW_H
#define UI_MYDIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDialogWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkButton;
    QPushButton *CloseButton;

    void setupUi(QDialog *MyDialogWindow)
    {
        if (MyDialogWindow->objectName().isEmpty())
            MyDialogWindow->setObjectName(QStringLiteral("MyDialogWindow"));
        MyDialogWindow->resize(298, 108);
        widget = new QWidget(MyDialogWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 20, 244, 62));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        OkButton = new QPushButton(widget);
        OkButton->setObjectName(QStringLiteral("OkButton"));

        horizontalLayout_2->addWidget(OkButton);

        CloseButton = new QPushButton(widget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        horizontalLayout_2->addWidget(CloseButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MyDialogWindow);
        QObject::connect(CloseButton, SIGNAL(clicked()), MyDialogWindow, SLOT(accept()));
        QObject::connect(OkButton, SIGNAL(clicked()), lineEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MyDialogWindow);
    } // setupUi

    void retranslateUi(QDialog *MyDialogWindow)
    {
        MyDialogWindow->setWindowTitle(QApplication::translate("MyDialogWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("MyDialogWindow", "TextLabel", Q_NULLPTR));
        OkButton->setText(QApplication::translate("MyDialogWindow", "Ok", Q_NULLPTR));
        CloseButton->setText(QApplication::translate("MyDialogWindow", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyDialogWindow: public Ui_MyDialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOGWINDOW_H
