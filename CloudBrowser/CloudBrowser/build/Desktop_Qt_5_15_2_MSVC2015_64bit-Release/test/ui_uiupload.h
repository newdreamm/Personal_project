/********************************************************************************
** Form generated from reading UI file 'uiupload.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIUPLOAD_H
#define UI_UIUPLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiUpload
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *UiUpload)
    {
        if (UiUpload->objectName().isEmpty())
            UiUpload->setObjectName(QString::fromUtf8("UiUpload"));
        UiUpload->resize(400, 300);
        verticalLayout = new QVBoxLayout(UiUpload);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(UiUpload);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget->setShowGrid(false);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(UiUpload);

        QMetaObject::connectSlotsByName(UiUpload);
    } // setupUi

    void retranslateUi(QWidget *UiUpload)
    {
        UiUpload->setWindowTitle(QCoreApplication::translate("UiUpload", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiUpload: public Ui_UiUpload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIUPLOAD_H
