#pragma execution_character_set("utf-8")
#include "filedock.h"
#include <QFileSystemModel>

#include <QVBoxLayout>

FileDock::FileDock(QWidget*parent):QDockWidget(parent)
{
    QFileSystemModel *model = new QFileSystemModel();
    model->setRootPath("E:/mygitee/TestPNote/");
//    model->setProperty()

    m_fileview = new QTreeView(this);
    m_fileview->setModel(model);
    m_fileview->setRootIndex(model->index("E:/mygitee/TestPNote/"));

    m_fileview->setColumnHidden(2, true);
    m_fileview->setColumnHidden(3, true);
    m_fileview->setFont(QFont(QStringLiteral("T宋体")));
    this->setWidget(m_fileview);
}
