#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "array.h"
#include "base.h"
#include "simplearray.h"
#include "sortedarray.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_simple_pushButton_clicked();

    void on_add_sorted_pushButton_clicked();

    void on_display_simple_pushButton_clicked();

    void on_display_sorted_pushButton_clicked();

    void on_is_included_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Array* pArr[2];
    SimpleArray* pSimple;
    SortedArray* pSorted;
};
#endif // MAINWINDOW_H
