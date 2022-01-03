#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H
#include "document.h"
#include "previewpage.h"
#include "yedit.h"

#include <QWidget>
#include <QSplitter>
#include <QPlainTextEdit>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QSyntaxHighlighter>

#include <qmarkdown/qmarkdowntextedit.h>

class CentralWidget:public QWidget
{
    Q_OBJECT
public:
    CentralWidget(QWidget* parent=nullptr);

private:
    QMarkdownTextEdit *m_edit;
//    QTextDocument *m_edit;
    QSplitter *m_spliter;

    Document * m_doc;
    QWebEngineView *m_view;
    QWebChannel *m_channel;

    PreviewPage *m_page;

    QSyntaxHighlighter *m_highlighter;

};

#endif // CENTRALWIDGET_H
