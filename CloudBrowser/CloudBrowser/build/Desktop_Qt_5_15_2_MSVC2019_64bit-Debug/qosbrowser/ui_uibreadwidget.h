/********************************************************************************
** Form generated from reading UI file 'uibreadwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIBREADWIDGET_H
#define UI_UIBREADWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiBreadWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListView *listView;

    void setupUi(QWidget *UiBreadWidget)
    {
        if (UiBreadWidget->objectName().isEmpty())
            UiBreadWidget->setObjectName(QString::fromUtf8("UiBreadWidget"));
        UiBreadWidget->resize(520, 73);
        horizontalLayout = new QHBoxLayout(UiBreadWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(UiBreadWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        listView->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        listView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        listView->setFlow(QListView::Flow::LeftToRight);

        horizontalLayout->addWidget(listView);


        retranslateUi(UiBreadWidget);

        QMetaObject::connectSlotsByName(UiBreadWidget);
    } // setupUi

    void retranslateUi(QWidget *UiBreadWidget)
    {
        UiBreadWidget->setWindowTitle(QCoreApplication::translate("UiBreadWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiBreadWidget: public Ui_UiBreadWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIBREADWIDGET_H
