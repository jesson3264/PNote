#ifndef MENUMANAGER_H
#define MENUMANAGER_H
#include <QMenuBar>
#include <QObject>
#include <QVector>
#include <QMainWindow>
class MainWindow;
typedef void (MainWindow::*Func) (void);
struct ActionItem {
    QString actionName;
    QObject* listenter;
    void (MainWindow::*Func) (void);
};
class MenuManager: public QObject
{
    Q_OBJECT
public:
    MenuManager(QMenuBar* mb);
    void RegisterAction(QString menuname, QString actionName);
    void RegisterActions(QString menuname, QStringList actionName);
    void registerOne(QMenu* menu, QString &actionname);
    void registerOne(QMenu* menu, ActionItem &actitem, void (MainWindow::*func) (void));
    void RegisterAction(QString menuname, ActionItem actItem, void (MainWindow::*func) (void));

private:
    QMenuBar *m_menubar;
    QVector<QMenu*> m_menus;
public slots:
    void New();
};

#endif // MENUMANAGER_H
