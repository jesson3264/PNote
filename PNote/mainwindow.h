#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "document.h"
#include "centralwidget.h"
#include "filedock.h"

#include <QMainWindow>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    Document m_content;
    CentralWidget *m_central;
    FileDock *m_filedock;
};
#endif // MAINWINDOW_H
