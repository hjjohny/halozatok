#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPushButton>
#include "drawerengine.h"

class MainWidget : public QWidget
{
  Q_OBJECT
public:
  explicit MainWidget(QWidget *parent_ = 0);
  void setup();
  void test();
signals:
public slots:
private:
  QPushButton* _startButton;//automatikus lépkedés, ha akarunk
  QPushButton* _stepButton;//kézzel léptetés
  QPushButton* _stopButton;// megállítja az automatikus léptetést
  QWidget* _palett;//erre rajzol a drawerEngine
  DrawerEngine _drawerEngine;
};

#endif // MAINWIDGET_H
