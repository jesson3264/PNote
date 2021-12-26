#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle("PNote");
    m_central = new CentralWidget(this);
    this->setCentralWidget(m_central);

    m_filedock = new FileDock(this);
    addDockWidget(Qt::LeftDockWidgetArea, m_filedock);

    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
}

