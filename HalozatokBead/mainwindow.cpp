#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent_) :
  QMainWindow(parent_),
  _ui(new Ui::MainWindow)
{
  _ui->setupUi(this);
  _mainWidget = new MainWidget(this);
  setCentralWidget(_mainWidget);

  connect(_ui->actionNew_Simulation,SIGNAL(triggered()),SLOT(newSimulationClicked()));
  connect(_ui->action_Exit,SIGNAL(triggered()),SLOT(close()));
}

MainWindow::~MainWindow()
{
  delete _ui;
}

void MainWindow::newSimulationClicked()
{
  _mainWidget->test();
}
