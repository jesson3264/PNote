#ifndef STATUSMANAGER_H
#define STATUSMANAGER_H
#include <QStatusBar>

class StatusManager
{
public:
    StatusManager(QStatusBar *sb);
private:
    QStatusBar *m_statusbar;
};
#endif // STATUSMANAGER_H
