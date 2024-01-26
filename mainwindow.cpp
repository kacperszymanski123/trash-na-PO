#include "mainwindow.h"
#include "add_item.h"
#include "dialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(std::string name_val, QMainWindow *parent)
    : QMainWindow(parent)
    , my_app(name_val),
    ui(new Ui::MainWindow),
    week_name(name_val)

{
    ui->setupUi(this);
    setWindowTitle(QString::fromStdString(name_val));
    ui->label_22->setText(QString::fromStdString(name_val));
    display();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSave_clicked()
{
    my_app.save();
}


void MainWindow::on_pushButtonAddDo1_clicked()
{
    add_item *new_add_item = new add_item(this, 0, 0);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}

void MainWindow::on_pushButtonAddDo2_clicked()
{
    add_item *new_add_item = new add_item(this, 0, 1);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddDo3_clicked()
{
    add_item *new_add_item = new add_item(this, 0, 2);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddDo4_clicked()
{
    add_item *new_add_item = new add_item(this, 0, 3);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddDo5_clicked()
{
    add_item *new_add_item = new add_item(this, 0, 4);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddDo6_clicked()
{
    add_item *new_add_item = new add_item(this, 0, 5);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddDo7_clicked()
{
    add_item *new_add_item = new add_item(this, 0, 6);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}

void MainWindow::on_pushButtonAddCook1_clicked()
{
    add_item *new_add_item = new add_item(this, 1, 0);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}

void MainWindow::on_pushButtonAddCook2_clicked()
{
    add_item *new_add_item = new add_item(this, 1, 1);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddCook3_clicked()
{
    add_item *new_add_item = new add_item(this, 1, 2);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddCook4_clicked()
{
    add_item *new_add_item = new add_item(this, 1, 3);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddCook5_clicked()
{
    add_item *new_add_item = new add_item(this, 1, 4);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddCook6_clicked()
{
    add_item *new_add_item = new add_item(this, 1, 5);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}
void MainWindow::on_pushButtonAddCook7_clicked()
{
    add_item *new_add_item = new add_item(this, 1, 6);
    new_add_item->setWindowModality(Qt::ApplicationModal);
    new_add_item->show();
}


void MainWindow::display(){
    ui->listWidgetMonday1->clear();
    ui->listWidgetMonday2->clear();
    ui->listWidgetTuesday1->clear();
    ui->listWidgetTuesday2->clear();
    ui->listWidgetWednesday1->clear();
    ui->listWidgetWednesday2->clear();
    ui->listWidgetThursday1->clear();
    ui->listWidgetThursday2->clear();
    ui->listWidgetFriday1->clear();
    ui->listWidgetFriday2->clear();
    ui->listWidgetSaturday1->clear();
    ui->listWidgetSaturday2->clear();
    ui->listWidgetSunday1->clear();
    ui->listWidgetSunday2->clear();

    int last = -1;
    for(const auto& toDo : my_app.all_days[0].all_to_do){
        last++;
        ui->listWidgetMonday1->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetMonday1->item(last)->setForeground(Qt::green);
        }
    }

    last = -1;
    for(const auto& toDo : my_app.all_days[0].all_to_cook){
        last++;
        ui->listWidgetMonday2->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetMonday2->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[1].all_to_do){
        last++;
        ui->listWidgetTuesday1->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetTuesday1->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[1].all_to_cook){
        last++;
        ui->listWidgetTuesday2->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetTuesday2->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[2].all_to_do){
        last++;
        ui->listWidgetWednesday1->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetWednesday1->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[2].all_to_cook){
        last++;
        ui->listWidgetWednesday2->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetWednesday2->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[3].all_to_do){
        last++;
        ui->listWidgetThursday1->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetThursday1->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[3].all_to_cook){
        last++;
        ui->listWidgetThursday2->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetThursday2->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[4].all_to_do){
        last++;
        ui->listWidgetFriday1->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetFriday1->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[4].all_to_cook){
        last++;
        ui->listWidgetFriday2->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetFriday2->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[5].all_to_do){
        last++;
        ui->listWidgetSaturday1->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetSaturday1->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[5].all_to_cook){
        last++;
        ui->listWidgetSaturday2->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetSaturday2->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[6].all_to_do){
        last++;
        ui->listWidgetSunday1->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetSunday1->item(last)->setForeground(Qt::green);
        }
    }
    last = -1;
    for(const auto& toDo : my_app.all_days[6].all_to_cook){
        last++;
        ui->listWidgetSunday2->addItem(QString::fromStdString(toDo.get_name()));
        if(toDo.get_status()){
            ui->listWidgetSunday2->item(last)->setForeground(Qt::green);
        }
    }
}

void MainWindow::on_listWidgetMonday1_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetMonday1->row(item);
    std::string name = my_app.all_days[0].all_to_do[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetMonday2_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetMonday2->row(item);
    std::string name = my_app.all_days[0].all_to_cook[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetTuesday1_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetTuesday1->row(item);
    std::string name = my_app.all_days[1].all_to_do[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetTuesday2_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetTuesday2->row(item);
    std::string name = my_app.all_days[1].all_to_cook[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetWednesday1_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetWednesday1->row(item);
    std::string name = my_app.all_days[2].all_to_do[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetWednesday2_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetWednesday2->row(item);
    std::string name = my_app.all_days[2].all_to_cook[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetThursday1_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetThursday1->row(item);
    std::string name = my_app.all_days[3].all_to_do[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetThursday2_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetThursday2->row(item);
    std::string name = my_app.all_days[3].all_to_cook[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetFriday1_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetFriday1->row(item);
    std::string name = my_app.all_days[4].all_to_do[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetFriday2_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetFriday2->row(item);
    std::string name = my_app.all_days[4].all_to_cook[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetSaturday1_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetSaturday1->row(item);
    std::string name = my_app.all_days[5].all_to_do[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetSaturday2_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetSaturday2->row(item);
    std::string name = my_app.all_days[5].all_to_cook[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetSunday1_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetSunday1->row(item);
    std::string name = my_app.all_days[6].all_to_do[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}

void MainWindow::on_listWidgetSunday2_itemDoubleClicked(QListWidgetItem *item)
{
    int i = ui->listWidgetSunday2->row(item);
    std::string name = my_app.all_days[6].all_to_cook[i].get_description();
    Dialog *newDialog = new Dialog(this, name);
    newDialog -> show();
}



void MainWindow::on_pushButtonDone1_clicked()
{
    int i = ui->listWidgetMonday1->currentRow();
     if(ui->listWidgetMonday1->count() > 0){
    my_app.all_days[0].all_to_do[i].set_status();
    display();
     }
}

void MainWindow::on_pushButtonDone2_clicked()
{
    int i = ui->listWidgetTuesday1->currentRow();
     if(ui->listWidgetTuesday1->count() > 0){
    my_app.all_days[1].all_to_do[i].set_status();
    display();
     }
}

void MainWindow::on_pushButtonDone3_clicked()
{
    int i = ui->listWidgetWednesday1->currentRow();
     if(ui->listWidgetWednesday1->count() > 0){
    my_app.all_days[2].all_to_do[i].set_status();
    display();
     }
}

void MainWindow::on_pushButtonDone4_clicked()
{
    int i = ui->listWidgetThursday1->currentRow();
     if(ui->listWidgetThursday1->count() > 0){
    my_app.all_days[3].all_to_do[i].set_status();
    display();
     }
}

void MainWindow::on_pushButtonDone5_clicked()
{
    int i = ui->listWidgetFriday1->currentRow();
     if(ui->listWidgetFriday1->count() > 0){
    my_app.all_days[4].all_to_do[i].set_status();
    display();
     }
}

void MainWindow::on_pushButtonDone6_clicked()
{
    int i = ui->listWidgetSaturday1->currentRow();
    if(ui->listWidgetSaturday1->count() > 0){
    my_app.all_days[5].all_to_do[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonDone7_clicked()
{
    int i = ui->listWidgetSunday1->currentRow();
    if(ui->listWidgetSunday1->count() > 0){
    my_app.all_days[6].all_to_do[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonCooked1_clicked()
{
    int i = ui->listWidgetMonday2->currentRow();
    if(ui->listWidgetMonday2->count() > 0){
    my_app.all_days[0].all_to_cook[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonCooked2_clicked()
{
    int i = ui->listWidgetTuesday2->currentRow();
    if(ui->listWidgetTuesday2->count() > 0){
    my_app.all_days[1].all_to_cook[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonCooked3_clicked()
{
    int i = ui->listWidgetWednesday2->currentRow();
    if(ui->listWidgetWednesday2->count() > 0){
    my_app.all_days[2].all_to_cook[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonCooked4_clicked()
{
    int i = ui->listWidgetThursday2->currentRow();
    if(ui->listWidgetThursday2->count() > 0){
    my_app.all_days[3].all_to_cook[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonCooked5_clicked()
{
    int i = ui->listWidgetFriday2->currentRow();
    if(ui->listWidgetFriday2->count() > 0){
    my_app.all_days[4].all_to_cook[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonCooked6_clicked()
{
    int i = ui->listWidgetSaturday2->currentRow();
    if(ui->listWidgetSaturday2->count() > 0){
    my_app.all_days[5].all_to_cook[i].set_status();
    display();
    }
}

void MainWindow::on_pushButtonCooked7_clicked()
{
    int i = ui->listWidgetSunday2->currentRow();
    if(ui->listWidgetSunday2->count() > 0){
    my_app.all_days[6].all_to_cook[i].set_status();
    display();
    }
}



