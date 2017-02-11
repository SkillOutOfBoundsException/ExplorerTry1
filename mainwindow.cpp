#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QStandardItemModel(4,4,this);
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
