#include "mainwindow.h"

#include <QApplication>
#include <QTextCodec>
#include <QtWebEngineWidgets/QWebEngineView>
int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
//    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
//    QTextCodec::setCodecForCStrings(codec);
    QApplication a(argc, argv);
//    QtWebEngine::initialize();
//    QWebEngineView *view = new QWebEngineView();
//    view->setUrl(QUrl("http://www.baidu.com"));
//    view->show();
    MainWindow w;
    w.show();
    return a.exec();
}
