#ifndef MENUMANAGER_H
#define MENUMANAGER_H
#include <QMenuBar>

class MenuManager
{
public:
    MenuManager(QMenuBar* mb);
private:
    QMenuBar *m_menubar;
};

#endif // MENUMANAGER_H
