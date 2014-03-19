#ifndef DRAWERENGINE_H
#define DRAWERENGINE_H

#include <QWidget>
#include <QPainter>

class DrawerEngine
{
public:
  DrawerEngine(QWidget* palett_ = 0);
  void setPalette(QWidget* palett_);
  void drawTest();
private:
  QWidget* _palett;
  QPainter _painter;
};

#endif // DRAWERENGINE_H
