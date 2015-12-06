#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_execButton_clicked()
{
   const QString filePath = ui->filePathInput->text();
   const double waiteTime = ui->waiteTimeInput->value();

}
