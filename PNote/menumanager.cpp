#include "menumanager.h"


MenuManager::MenuManager(QMenuBar* mb)
{
    m_menubar = mb;


    m_menubar->addMenu("&File");
}
