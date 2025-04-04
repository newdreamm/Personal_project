﻿#include "src/config/common.h"
#include "src/fend/uimain/uimain.h"
#include <Exception>
#include <QApplication>
#include <QMessageBox>
#include <QTextCodec>
#include "src/fend/uilogin/uilogindialog.h"
#include "src/middle/manglobal.h"
#include <src/fend/uicom/uimessagebox.h>

// TODO 3 更改logo，调整按钮UI贴图 大小和风格统一吗，还有程序要有图标
// TODO 4 去除冗余日志，添加重要日志
// TODO 5 发布项目尝试功能，使用前清理数据库（重点）
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 设置编码
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    // 安装插件
    try{
        MG->init(argc, argv);
    }catch(const QString& error)
    {
        // 捕获异常并显示 QMessageBox
        QMessageBox::critical(nullptr, "插件初始化错误", error);
        return -1; // 返回非零值表示错误
    }

    UiMain w;
    UiLoginDialog login;
    login.show();
    return a.exec();
}
