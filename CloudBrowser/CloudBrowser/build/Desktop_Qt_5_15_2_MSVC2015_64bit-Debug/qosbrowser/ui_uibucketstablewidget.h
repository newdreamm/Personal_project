/********************************************************************************
** Form generated from reading UI file 'uibucketstablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIBUCKETSTABLEWIDGET_H
#define UI_UIBUCKETSTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <src/fend/uicom/uipushbutton.h>
#include "src/fend/uicom/uipagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_UiBucketsTableWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetTools;
    QHBoxLayout *horizontalLayout;
    UiPushButton *btnCreateBucket;
    UiPushButton *btnRefresh;
    QLabel *appidLabel;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    UiPageWidget *widgetPage;

    void setupUi(QWidget *UiBucketsTableWidget)
    {
        if (UiBucketsTableWidget->objectName().isEmpty())
            UiBucketsTableWidget->setObjectName(QString::fromUtf8("UiBucketsTableWidget"));
        UiBucketsTableWidget->resize(840, 492);
        verticalLayout = new QVBoxLayout(UiBucketsTableWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetTools = new QWidget(UiBucketsTableWidget);
        widgetTools->setObjectName(QString::fromUtf8("widgetTools"));
        horizontalLayout = new QHBoxLayout(widgetTools);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnCreateBucket = new UiPushButton(widgetTools);
        btnCreateBucket->setObjectName(QString::fromUtf8("btnCreateBucket"));
        btnCreateBucket->setMinimumSize(QSize(80, 0));
        btnCreateBucket->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btnCreateBucket);

        btnRefresh = new UiPushButton(widgetTools);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        horizontalLayout->addWidget(btnRefresh);

        appidLabel = new QLabel(widgetTools);
        appidLabel->setObjectName(QString::fromUtf8("appidLabel"));

        horizontalLayout->addWidget(appidLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widgetTools);

        tableView = new QTableView(UiBucketsTableWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableView->setShowGrid(false);

        verticalLayout->addWidget(tableView);

        widgetPage = new UiPageWidget(UiBucketsTableWidget);
        widgetPage->setObjectName(QString::fromUtf8("widgetPage"));

        verticalLayout->addWidget(widgetPage);


        retranslateUi(UiBucketsTableWidget);

        QMetaObject::connectSlotsByName(UiBucketsTableWidget);
    } // setupUi

    void retranslateUi(QWidget *UiBucketsTableWidget)
    {
        UiBucketsTableWidget->setWindowTitle(QCoreApplication::translate("UiBucketsTableWidget", "Form", nullptr));
        btnCreateBucket->setText(QCoreApplication::translate("UiBucketsTableWidget", "\345\210\233\345\273\272\345\255\230\345\202\250\346\241\266", nullptr));
        btnRefresh->setText(QCoreApplication::translate("UiBucketsTableWidget", "\345\210\267\346\226\260", nullptr));
        appidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UiBucketsTableWidget: public Ui_UiBucketsTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIBUCKETSTABLEWIDGET_H
