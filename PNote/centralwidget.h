#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QSplitter>
#include <QPlainTextEdit>
#include <QtWebEngineWidgets/QWebEngineView>

#include "document.h"
#include "previewpage.h"
class CentralWidget:public QWidget
{
    Q_OBJECT
public:
    CentralWidget(QWidget* parent=nullptr);

private:
    QPlainTextEdit *m_edit;
    QSplitter *m_spliter;

    Document * m_doc;
    QWebEngineView *m_view;
    QWebChannel *m_channel;

    PreviewPage *m_page;
//    QWebChannel *channel = new QWebChannel(this);
//    channel->registerObject(QStringLiteral("content"), &m_content);
//    page->setWebChannel(channel);

//QWebEngineView *preview;
};

#endif // CENTRALWIDGET_H
