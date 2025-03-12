/********************************************************************************
** Form generated from reading UI file 'uilogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILOGINDIALOG_H
#define UI_UILOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <src/fend/uicom/uipushbutton.h>
#include "src/fend/uicom/uicomboline.h"
#include "src/fend/uicom/uikeywordedit.h"

QT_BEGIN_NAMESPACE

class Ui_UiLoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_7;
    QLabel *labelLoginName;
    UiComboLine *lineLoginName;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelSecretID;
    QLineEdit *lineSecretID;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelSecretKey;
    UiKeywordEdit *lineSecretKey;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelRemark;
    QLineEdit *lineRemark;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *saveSection;
    UiPushButton *btnLogin;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *UiLoginDialog)
    {
        if (UiLoginDialog->objectName().isEmpty())
            UiLoginDialog->setObjectName(QString::fromUtf8("UiLoginDialog"));
        UiLoginDialog->resize(412, 493);
        verticalLayout = new QVBoxLayout(UiLoginDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, 30, -1);
        verticalSpacer_7 = new QSpacerItem(20, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_7);

        labelLoginName = new QLabel(UiLoginDialog);
        labelLoginName->setObjectName(QString::fromUtf8("labelLoginName"));

        verticalLayout->addWidget(labelLoginName);

        lineLoginName = new UiComboLine(UiLoginDialog);
        lineLoginName->setObjectName(QString::fromUtf8("lineLoginName"));

        verticalLayout->addWidget(lineLoginName);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        labelSecretID = new QLabel(UiLoginDialog);
        labelSecretID->setObjectName(QString::fromUtf8("labelSecretID"));
        QFont font;
        font.setPointSize(12);
        labelSecretID->setFont(font);

        verticalLayout->addWidget(labelSecretID);

        lineSecretID = new QLineEdit(UiLoginDialog);
        lineSecretID->setObjectName(QString::fromUtf8("lineSecretID"));
        lineSecretID->setMinimumSize(QSize(0, 32));
        lineSecretID->setMaximumSize(QSize(16777215, 32));
        lineSecretID->setClearButtonEnabled(false);

        verticalLayout->addWidget(lineSecretID);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        labelSecretKey = new QLabel(UiLoginDialog);
        labelSecretKey->setObjectName(QString::fromUtf8("labelSecretKey"));
        labelSecretKey->setFont(font);
        labelSecretKey->setIndent(-1);

        verticalLayout->addWidget(labelSecretKey);

        lineSecretKey = new UiKeywordEdit(UiLoginDialog);
        lineSecretKey->setObjectName(QString::fromUtf8("lineSecretKey"));
        lineSecretKey->setMinimumSize(QSize(0, 32));
        lineSecretKey->setMaximumSize(QSize(16777215, 32));
        lineSecretKey->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineSecretKey);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_4);

        labelRemark = new QLabel(UiLoginDialog);
        labelRemark->setObjectName(QString::fromUtf8("labelRemark"));
        labelRemark->setFont(font);

        verticalLayout->addWidget(labelRemark);

        lineRemark = new QLineEdit(UiLoginDialog);
        lineRemark->setObjectName(QString::fromUtf8("lineRemark"));
        lineRemark->setMinimumSize(QSize(0, 32));
        lineRemark->setMaximumSize(QSize(16777215, 32));

        verticalLayout->addWidget(lineRemark);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_5);

        saveSection = new QCheckBox(UiLoginDialog);
        saveSection->setObjectName(QString::fromUtf8("saveSection"));
        QFont font1;
        font1.setPointSize(9);
        saveSection->setFont(font1);

        verticalLayout->addWidget(saveSection);

        btnLogin = new UiPushButton(UiLoginDialog);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setMinimumSize(QSize(0, 32));
        btnLogin->setMaximumSize(QSize(16777215, 32));
        QFont font2;
        font2.setFamily(QString::fromUtf8("sans-serif"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        btnLogin->setFont(font2);
        btnLogin->setStyleSheet(QString::fromUtf8(""));
        btnLogin->setCheckable(false);
        btnLogin->setChecked(false);
        btnLogin->setAutoRepeat(false);

        verticalLayout->addWidget(btnLogin);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_6);

#if QT_CONFIG(shortcut)
        labelSecretID->setBuddy(lineSecretID);
        labelSecretKey->setBuddy(lineSecretKey);
#endif // QT_CONFIG(shortcut)

        retranslateUi(UiLoginDialog);

        QMetaObject::connectSlotsByName(UiLoginDialog);
    } // setupUi

    void retranslateUi(QWidget *UiLoginDialog)
    {
        UiLoginDialog->setWindowTitle(QCoreApplication::translate("UiLoginDialog", "\347\231\273\345\275\225", nullptr));
        labelLoginName->setText(QCoreApplication::translate("UiLoginDialog", "\347\231\273\345\275\225\345\220\215", nullptr));
        lineLoginName->setText(QString());
        lineLoginName->setPlaceholderText(QCoreApplication::translate("UiLoginDialog", "\350\264\246\346\210\267\345\210\253\345\220\215", nullptr));
        labelSecretID->setText(QCoreApplication::translate("UiLoginDialog", "Secret&ID", nullptr));
        lineSecretID->setPlaceholderText(QCoreApplication::translate("UiLoginDialog", "\350\257\267\350\276\223\345\205\245\350\264\246\346\210\267ID", nullptr));
        labelSecretKey->setText(QCoreApplication::translate("UiLoginDialog", "Secret&Key", nullptr));
        lineSecretKey->setPlaceholderText(QCoreApplication::translate("UiLoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        labelRemark->setText(QCoreApplication::translate("UiLoginDialog", "\345\244\207\346\263\250", nullptr));
        saveSection->setText(QCoreApplication::translate("UiLoginDialog", "\350\256\260\344\275\217\344\274\232\350\257\235", nullptr));
#if QT_CONFIG(tooltip)
        btnLogin->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnLogin->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        btnLogin->setText(QCoreApplication::translate("UiLoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiLoginDialog: public Ui_UiLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILOGINDIALOG_H
