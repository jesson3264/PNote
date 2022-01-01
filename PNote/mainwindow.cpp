#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle("PNote");
    // 设置菜单
    m_menus = new MenuManager(this->menuBar());
    ActionItem ai;
    ai.actionName=  QStringLiteral("关于作者");
    ai.listenter = this;
//    ai.Func = ;
    m_menus->RegisterAction(QStringLiteral("关于"), ai, &MainWindow::About);

//    m_menus->RegisterAction()
    // 设置状态栏
    m_statusbar = new StatusManager(this->statusBar());
    statusBar()->showMessage(QStringLiteral("欢迎使用PNote，问题反馈 jesson3264@163.com!"));
    m_central = new CentralWidget(this);
    this->setCentralWidget(m_central);

    m_filedock = new FileDock(this);
    addDockWidget(Qt::LeftDockWidgetArea, m_filedock);


    this->setWindowState(Qt::WindowMaximized);
}

void MainWindow::About()
{
    qDebug()<<QStringLiteral("关于作者")<<endl;
}

MainWindow::~MainWindow()
{

}

