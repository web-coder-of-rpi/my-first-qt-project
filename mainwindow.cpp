#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setVisible(false);
    ui->buttonBox->setVisible(false);
    ui->radioButton->setVisible(false);
    ui->radioButton_2->setVisible(false);
    ui->tabWidget->setVisible(false);
    ui->progressBar->setVisible(false);
    ui->dial->setVisible(false);
    ui->doubleSpinBox->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->stackedWidget->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_commandLinkButton_clicked()
{
    ui->textBrowser->setVisible(false);
    ui->commandLinkButton->setVisible(false);
    ui->stackedWidget->setVisible(true);
    ui->buttonBox->setVisible(true);
    ui->radioButton->setVisible(true);
    ui->radioButton_2->setVisible(true);
    ui->tabWidget->setVisible(true);
    ui->progressBar->setVisible(true);
    ui->doubleSpinBox->setVisible(true);
    ui->pushButton->setVisible(true);
    ui->stackedWidget->setVisible(true);
}


void MainWindow::on_pushButton_clicked()
{
    this->close();
}

