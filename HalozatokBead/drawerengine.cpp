#include "drawerengine.h"
#include <QDebug>

DrawerEngine::DrawerEngine(QWidget* palett_)
  :_palett(palett_)
{}

void DrawerEngine::setPalette(QWidget *palett_)
{
  _palett=palett_;
}

void DrawerEngine::drawTest()
{
  if(!_palett)
  {
    qDebug()<<"WTF?????????";
  }

  if(_painter.begin(_palett))
  {
    _painter.fillRect(_palett->rect(),Qt::white);
    _painter.drawLine(QPointF(0,0),QPointF(100,100));
    _painter.end();
  }
  else
  {
    qDebug()<<"hiba";
  }
}
