#include "centralwidget.h"

#include <QtWebChannel>
#include <QSizePolicy>
#include <QHBoxLayout>
#include "qmarkdown/markdownhighlighter.h"
CentralWidget::CentralWidget(QWidget* parent):QWidget(parent)
{
    QHBoxLayout *hbl = new QHBoxLayout(this);

    m_spliter = new QSplitter(this);
    hbl->addWidget(m_spliter);
    hbl->setStretch(0,1);
//    m_edit = new QPlainTextEdit(this);
    m_edit = new QMarkdownTextEdit(this, true);
//    m_edit->zoomIn(4);

    m_view = new QWebEngineView(this);

    m_spliter->addWidget(m_edit);
    m_spliter->addWidget(m_view);
    m_spliter->setStretchFactor(0,0);
    m_spliter->setStretchFactor(1,1);

    m_spliter->show();

    m_doc = new Document(this);
    connect(m_edit, &QPlainTextEdit::textChanged,
                [this]() { m_doc->setText(m_edit->toPlainText()); });

    PreviewPage *page = new PreviewPage(this);
    m_view->setPage(page);
    QWebChannel *channel = new QWebChannel(this);
    channel->registerObject(QStringLiteral("content"), m_doc);
    page->setWebChannel(channel);


    m_view->setContextMenuPolicy(Qt::NoContextMenu);


    m_view->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    m_view->setUrl(QUrl("qrc:/index.html"));

    m_highlighter = new MarkdownHighlighter(m_edit->document());


    QFile defaultTextFile(":/default.md");// 加载默认文件
    defaultTextFile.open(QIODevice::ReadOnly);
    m_edit->setPlainText(defaultTextFile.readAll());
}
