/********************************************************************************
** Form generated from reading UI file 'uipagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIPAGEWIDGET_H
#define UI_UIPAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <src/fend/uicom/uipushbutton.h>
#include "src/fend/uicom/uicomboline.h"

QT_BEGIN_NAMESPACE

class Ui_UiPageWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTotalCount;
    QLabel *label;
    UiComboLine *lineMaxRows;
    QLabel *label_2;
    UiPushButton *btnPre;
    UiComboLine *lineCurrentPage;
    QLabel *labelPageCount;
    UiPushButton *btnNext;

    void setupUi(QWidget *UiPageWidget)
    {
        if (UiPageWidget->objectName().isEmpty())
            UiPageWidget->setObjectName(QString::fromUtf8("UiPageWidget"));
        UiPageWidget->resize(509, 29);
        horizontalLayout = new QHBoxLayout(UiPageWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelTotalCount = new QLabel(UiPageWidget);
        labelTotalCount->setObjectName(QString::fromUtf8("labelTotalCount"));

        horizontalLayout->addWidget(labelTotalCount);

        label = new QLabel(UiPageWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineMaxRows = new UiComboLine(UiPageWidget);
        lineMaxRows->setObjectName(QString::fromUtf8("lineMaxRows"));
        lineMaxRows->setMaximumSize(QSize(36, 16777215));

        horizontalLayout->addWidget(lineMaxRows);

        label_2 = new QLabel(UiPageWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        btnPre = new UiPushButton(UiPageWidget);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));
        btnPre->setMaximumSize(QSize(25, 16777215));

        horizontalLayout->addWidget(btnPre);

        lineCurrentPage = new UiComboLine(UiPageWidget);
        lineCurrentPage->setObjectName(QString::fromUtf8("lineCurrentPage"));
        lineCurrentPage->setMaximumSize(QSize(32, 16777215));

        horizontalLayout->addWidget(lineCurrentPage);

        labelPageCount = new QLabel(UiPageWidget);
        labelPageCount->setObjectName(QString::fromUtf8("labelPageCount"));

        horizontalLayout->addWidget(labelPageCount);

        btnNext = new UiPushButton(UiPageWidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setMaximumSize(QSize(25, 16777215));

        horizontalLayout->addWidget(btnNext);


        retranslateUi(UiPageWidget);

        QMetaObject::connectSlotsByName(UiPageWidget);
    } // setupUi

    void retranslateUi(QWidget *UiPageWidget)
    {
        UiPageWidget->setWindowTitle(QCoreApplication::translate("UiPageWidget", "Form", nullptr));
        labelTotalCount->setText(QString());
        label->setText(QCoreApplication::translate("UiPageWidget", "\346\257\217\351\241\265\346\230\276\347\244\272", nullptr));
        label_2->setText(QCoreApplication::translate("UiPageWidget", "\350\241\214", nullptr));
        btnPre->setText(QCoreApplication::translate("UiPageWidget", "<", nullptr));
        labelPageCount->setText(QString());
        btnNext->setText(QCoreApplication::translate("UiPageWidget", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiPageWidget: public Ui_UiPageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIPAGEWIDGET_H
