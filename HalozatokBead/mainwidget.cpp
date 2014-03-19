#include "mainwidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWidget::MainWidget(QWidget *parent_) :
  QWidget(parent_)
{
  setup();
  _drawerEngine.setPalette(_palett);
}

void MainWidget::setup()
{
  QVBoxLayout* mainLayout = new QVBoxLayout();
  _palett=new QWidget(this);
  _palett->setAttribute(Qt::WA_PaintOutsidePaintEvent);
  QHBoxLayout* buttonLayout = new QHBoxLayout();
  _startButton = new QPushButton("Start",this);
  _stepButton = new QPushButton("Step",this);
  _stopButton = new QPushButton("Stop",this);

  buttonLayout->addWidget(_startButton);
  buttonLayout->addWidget(_stepButton);
  buttonLayout->addWidget(_stopButton);

  mainLayout->addWidget(_palett);
  mainLayout->addLayout(buttonLayout);

  setLayout(mainLayout);
}

void MainWidget::test()
{
    _drawerEngine.drawTest();
}

