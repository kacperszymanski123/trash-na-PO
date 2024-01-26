#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent, std::string new_val)
    : QDialog(parent)
    , ui(new Ui::Dialog),
    desc(new_val)
{
    ui->setupUi(this);
    ui->label->setText(QString::fromStdString(desc));
}

Dialog::~Dialog()
{
    delete ui;
}
