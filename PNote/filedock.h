#ifndef FILEDOCK_H
#define FILEDOCK_H
#include <QDockWidget>
#include <QWidget>
#include <QTreeView>
#include <QListView>
// treeView  dockwidget

class FileDock:public QDockWidget {
Q_OBJECT
public:
    FileDock(QWidget*parent = nullptr);
private:
    QTreeView *m_fileview;
};

#endif // FILEDOCK_H
