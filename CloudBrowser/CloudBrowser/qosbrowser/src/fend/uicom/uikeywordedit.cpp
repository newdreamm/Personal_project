﻿#include "uikeywordedit.h"

UiKeywordEdit::UiKeywordEdit(QWidget* parent)
    :QLineEdit(parent)
{

}
void UiKeywordEdit::keyPressEvent(QKeyEvent *event)
{
    // 捕获按键
    if(event->modifiers() == Qt::ControlModifier)
    {
        // 直接返回了
        if(event->key() == Qt::Key_C || event->key() == Qt::Key_V)
            return;
    }
    QLineEdit::keyPressEvent(event);
}
