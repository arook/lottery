#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDesktopServices"
#include "QUrl"
#include "QProcess"

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

void MainWindow::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("http://localhost:8000"));
}

void MainWindow::on_pushButton_clicked()
{
    QProcess::execute("pwd");
}
