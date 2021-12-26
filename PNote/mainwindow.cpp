#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle("PNote");
    m_central = new CentralWidget(this);
    this->setCentralWidget(m_central);
}

MainWindow::~MainWindow()
{
}

