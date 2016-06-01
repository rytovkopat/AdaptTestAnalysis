#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // приведение элементов окна к начальному виду

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_StartTest_clicked()
{
    // начать тестирование
}

void MainWindow::on_pushButton_StopTest_clicked()
{
    // остановить тестирование
}

void MainWindow::on_pushButton_Skip_clicked()
{
    // пропустить вопрос
}

void MainWindow::on_pushButton_Response_clicked()
{
    // ответить на вопрос
}
