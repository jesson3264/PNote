#include "mainwindow.h"

#include <QApplication>
#include <QtWebEngineWidgets/QWebEngineView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QtWebEngine::initialize();
//    QWebEngineView *view = new QWebEngineView();
//    view->setUrl(QUrl("http://www.baidu.com"));
//    view->show();
    MainWindow w;
    w.show();
    return a.exec();
}
