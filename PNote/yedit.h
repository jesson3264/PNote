#ifndef YEDIT_H
#define YEDIT_H
#include <QPlainTextEdit>
#include <QWheelEvent>

class YEdit:public QPlainTextEdit
{
    Q_OBJECT
public:
    YEdit(QWidget* parent);

    void wheelEvent(QWheelEvent *e);//滚轮事件
};

#endif // YEDIT_H
