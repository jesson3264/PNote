#include "yedit.h"
#include <QApplication>

YEdit::YEdit(QWidget * parent):QPlainTextEdit(parent)
{

}

void YEdit::wheelEvent(QWheelEvent *e)
{
    if(QApplication::keyboardModifiers() == Qt::ControlModifier)//ctrl键的判断
    {
        if(e->delta() > 0)
        {
            zoomIn();//放大
        }
        else
        {
                zoomOut();//缩小
        }
    }
}


