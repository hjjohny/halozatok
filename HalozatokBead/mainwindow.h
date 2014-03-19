#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
  
public:
  explicit MainWindow(QWidget *parent_= 0);
  ~MainWindow();

public slots:
  void newSimulationClicked();
private:
  Ui::MainWindow *_ui;
  MainWidget* _mainWidget;
};

#endif // MAINWINDOW_H
