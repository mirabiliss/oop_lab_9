#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pArr[0] = new SimpleArray();
    pArr[1] = new SortedArray();
    pSimple = dynamic_cast<SimpleArray*>(this->pArr[0]);
    pSorted = dynamic_cast<SortedArray*>(this->pArr[1]);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_simple_pushButton_clicked()
{
    double toAdd = ui->input_lineEdit->text().toDouble();
    this->pSimple->addElem(toAdd);
}

void MainWindow::on_add_sorted_pushButton_clicked()
{
    double toAdd = ui->input_lineEdit->text().toDouble();
    this->pSorted->addElem(toAdd);
}

void MainWindow::on_display_simple_pushButton_clicked()
{
    if (this->pSimple->array){
        QString str = "";
        for (int i = 0; i < this->pSimple->getElements(); i++){
            str += QString::number(this->pSimple->array[i]) + "\n";
        }
        ui->display_textEdit->setText(str);
    }
}

void MainWindow::on_display_sorted_pushButton_clicked()
{
    if (this->pSorted->array){
        QString str = "";
        for (int i = 0; i < this->pSorted->getElements(); i++){
            str += QString::number(this->pSorted->array[i]) + "\n";
        }
        ui->display_textEdit->setText(str);
    }
}

void MainWindow::on_is_included_pushButton_clicked()
{
    if (this->pSimple->isIncluded(ui->input_lineEdit->text().toDouble())){
        ui->is_included_label->setText("Yes.");
    }
    else {
        ui->is_included_label->setText("No.");
    }
}
