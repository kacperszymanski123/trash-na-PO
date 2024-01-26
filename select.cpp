#include "select.h"
#include "add_week.h"
#include "mainwindow.h"
#include "ui_select.h"
#include <iostream>
#include <fstream>

select::select(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::select)
{
    ui->setupUi(this);
    ui->listWidget->clear();
    display();

}

void select::display(){
    std::ifstream file("C:\\Users\\kacpe\\Documents\\to_do_app\\weeks");

    if(file.is_open()){
        std::string line;
        while (std::getline(file, line, '\n')){
            ui->listWidget->addItem(QString::fromStdString(line));
        }
    } else {
        std::cout << "Nie ma takiego pliku" << std::endl;
    }
    file.close();
}

void select::add_user(std::string& new_user_name){
    std::ofstream outputFile("C:\\Users\\kacpe\\Documents\\to_do_app\\weeks", std::ios::app);  // Open the file in append mode
    if (outputFile.is_open()) {
        std::string newLine = new_user_name;
        outputFile << newLine << std::endl;
        outputFile.close();
    } else {
        std::cout << "Nie ma takiego pliku" << std::endl;
    }
}




void select::on_pushButton_clicked()
{
    hide();
    add_week *new_add_week = new add_week(this);
    new_add_week->show();


}



select::~select()
{
    delete ui;
}

void select::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    hide();
    QString tmp = item->text();
    std::string name = tmp.toStdString();
    MainWindow *new_main_window = new MainWindow(name);
    new_main_window -> show();
}

