#include "menumanager.h"
#include "mainwindow.h"

#include <QDebug>

MenuManager::MenuManager(QMenuBar* mb):QObject(nullptr)
{
    m_menubar = mb;

    QMenu *file = m_menubar->addMenu("&File");


    QAction* act = file->addAction(QStringLiteral("新建"));
    act->setShortcut(QKeySequence::New);

    connect(act, SIGNAL(triggered()), this, SLOT(New()));

    act = file->addAction(QStringLiteral("打开"));
    act->setShortcut(QKeySequence::Open);

    act = file->addAction(QStringLiteral("保存"));
    act->setShortcut(QKeySequence::Save);
    act = file->addAction(QStringLiteral("另存为"));
    act->setShortcut(QKeySequence::SaveAs);
    file->addSeparator();
    act = file->addAction(QStringLiteral("退出"));
    act->setShortcut(QKeySequence::Quit);
}

void MenuManager::RegisterAction(QString menuname, ActionItem actItem, void (MainWindow::*func) (void)) {
    QMenu* m = nullptr;
    for (QVector<QMenu*>::iterator i = m_menus.begin(); i != m_menus.end(); ++i)
    {
        if ((*i)->title() == actItem.actionName) {
            m = (*i);
            break;
        }
    }

    if (m == nullptr) {
        m = m_menubar->addMenu(menuname);
        m_menus.append(m);
    }

    this->registerOne(m, actItem, func);

}
void MenuManager::RegisterAction(QString menuname, QString actionName)
{
    QMenu* m = nullptr;
    for (QVector<QMenu*>::iterator i = m_menus.begin(); i != m_menus.end(); ++i)
    {
        if ((*i)->title() == menuname) {
            m = (*i);
            break;
        }
    }

    if (m == nullptr) {
        m = m_menubar->addMenu(menuname);
        m_menus.append(m);
    }


    this->registerOne(m, actionName);
}

void MenuManager::registerOne(QMenu* menu, QString &actionName)
{
    menu->addAction(actionName);
//    connect(act, SIGNAL(triggered()), this, SLOT(New()));
//    connect(a, SIGNAL(triggered()), act.listenter, SLOT(act.func));
}

void MenuManager::registerOne(QMenu* menu, ActionItem &act, void (MainWindow::*func) (void))
{
    QAction *a = menu->addAction(act.actionName);
//    QObject::connect(a, &QAction::triggered, act.listenter, &act.Func);
    QObject::connect(a, &QAction::triggered, (MainWindow*)(act.listenter), func);
}

void MenuManager::RegisterActions(QString menuname, QStringList actionName)
{
    QMenu* m = nullptr;
    for (QVector<QMenu*>::iterator i = m_menus.begin(); i != m_menus.end(); ++i)
    {
        if ((*i)->title() == menuname)
        {
            m = (*i);
            break;
        }
    }


    if (m == nullptr) {
        m = m_menubar->addMenu(menuname);
        m_menus.append(m);
    }

    for (auto i = actionName.begin(); i != actionName.end(); ++i) {
        this->registerOne(m, *i);
    }

}

void MenuManager::New()
{
    qDebug()<<"New file"<<endl;
}
