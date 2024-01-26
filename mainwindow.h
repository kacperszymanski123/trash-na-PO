#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "app.h"
#include "qlistwidget.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(std::string name_val, QMainWindow *parent = nullptr);
    app my_app;
    void display();
    ~MainWindow();

private slots:
    void on_pushButtonSave_clicked();

    void on_pushButtonAddDo1_clicked();
    void on_pushButtonAddDo2_clicked();
    void on_pushButtonAddDo3_clicked();
    void on_pushButtonAddDo4_clicked();
    void on_pushButtonAddDo5_clicked();
    void on_pushButtonAddDo6_clicked();
    void on_pushButtonAddDo7_clicked();

    void on_pushButtonAddCook1_clicked();
    void on_pushButtonAddCook2_clicked();
    void on_pushButtonAddCook3_clicked();
    void on_pushButtonAddCook4_clicked();
    void on_pushButtonAddCook5_clicked();
    void on_pushButtonAddCook6_clicked();
    void on_pushButtonAddCook7_clicked();


    void on_listWidgetMonday1_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetMonday2_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetTuesday1_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetTuesday2_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetWednesday1_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetWednesday2_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetThursday1_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetThursday2_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetFriday1_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetFriday2_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetSaturday1_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetSaturday2_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetSunday1_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidgetSunday2_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButtonDone1_clicked();
    void on_pushButtonDone2_clicked();
    void on_pushButtonDone3_clicked();
    void on_pushButtonDone4_clicked();
    void on_pushButtonDone5_clicked();
    void on_pushButtonDone6_clicked();
    void on_pushButtonDone7_clicked();

    void on_pushButtonCooked1_clicked();
    void on_pushButtonCooked2_clicked();
    void on_pushButtonCooked3_clicked();
    void on_pushButtonCooked4_clicked();
    void on_pushButtonCooked5_clicked();
    void on_pushButtonCooked6_clicked();
    void on_pushButtonCooked7_clicked();

private:
    Ui::MainWindow *ui;
    std::string week_name;

};
#endif // MAINWINDOW_H
