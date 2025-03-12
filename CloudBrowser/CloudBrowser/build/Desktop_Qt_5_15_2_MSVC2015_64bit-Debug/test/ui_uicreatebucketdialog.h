/********************************************************************************
** Form generated from reading UI file 'uicreatebucketdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UICREATEBUCKETDIALOG_H
#define UI_UICREATEBUCKETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <src/fend/uicom/uipushbutton.h>

QT_BEGIN_NAMESPACE

class Ui_UiCreateBucketDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelLocation;
    QLineEdit *lineLocation;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    UiPushButton *btnOk;
    UiPushButton *btnCancel;

    void setupUi(QWidget *UiCreateBucketDialog)
    {
        if (UiCreateBucketDialog->objectName().isEmpty())
            UiCreateBucketDialog->setObjectName(QString::fromUtf8("UiCreateBucketDialog"));
        UiCreateBucketDialog->resize(400, 152);
        verticalLayout = new QVBoxLayout(UiCreateBucketDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelName = new QLabel(UiCreateBucketDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        horizontalLayout->addWidget(labelName);

        lineName = new QLineEdit(UiCreateBucketDialog);
        lineName->setObjectName(QString::fromUtf8("lineName"));

        horizontalLayout->addWidget(lineName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelLocation = new QLabel(UiCreateBucketDialog);
        labelLocation->setObjectName(QString::fromUtf8("labelLocation"));

        horizontalLayout_2->addWidget(labelLocation);

        lineLocation = new QLineEdit(UiCreateBucketDialog);
        lineLocation->setObjectName(QString::fromUtf8("lineLocation"));

        horizontalLayout_2->addWidget(lineLocation);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOk = new UiPushButton(UiCreateBucketDialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_3->addWidget(btnOk);

        btnCancel = new UiPushButton(UiCreateBucketDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(UiCreateBucketDialog);

        QMetaObject::connectSlotsByName(UiCreateBucketDialog);
    } // setupUi

    void retranslateUi(QWidget *UiCreateBucketDialog)
    {
        UiCreateBucketDialog->setWindowTitle(QCoreApplication::translate("UiCreateBucketDialog", "Form", nullptr));
        labelName->setText(QCoreApplication::translate("UiCreateBucketDialog", "\346\241\266\345\220\215\347\247\260\357\274\232", nullptr));
        lineName->setText(QString());
        lineName->setPlaceholderText(QCoreApplication::translate("UiCreateBucketDialog", "\345\220\215\347\247\260-appid", nullptr));
        labelLocation->setText(QCoreApplication::translate("UiCreateBucketDialog", "\346\241\266\344\275\215\347\275\256\357\274\232", nullptr));
        lineLocation->setPlaceholderText(QCoreApplication::translate("UiCreateBucketDialog", "ap-shanghai", nullptr));
        btnOk->setText(QCoreApplication::translate("UiCreateBucketDialog", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("UiCreateBucketDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiCreateBucketDialog: public Ui_UiCreateBucketDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UICREATEBUCKETDIALOG_H
