#include "filedock.h"
#include <QFileSystemModel>
#pragma execution_character_set("utf-8")
#include <QVBoxLayout>

FileDock::FileDock(QWidget*parent):QDockWidget(parent)
{

//    QVBoxLayout* layout = new QVBoxLayout(this);

    QFileSystemModel *model = new QFileSystemModel();
//    model->setRootPath("E:/mygitee/TestPNote/");
    model->setRootPath("E:/mygitee/TestPNote/");


//    QStringList nameFilter;
//    nameFilter << "*.md" << "*.h";
//    model->setNameFilterDisables(false);
//    model->setNameFilters(nameFilter);
    m_fileview = new QTreeView(this);
    m_fileview->setModel(model);
    m_fileview->setRootIndex(model->index("E:/mygitee/TestPNote/"));
//    m_fileview->setViewMode(QListView::IconMode);
//    layout->addWidget(m_fileview);
    m_fileview->setColumnHidden(2, true);
    m_fileview->setColumnHidden(3, true);
    m_fileview->setFont(QFont("T宋体"));
    this->setWidget(m_fileview);
}
