#ifndef SELECT_H
#define SELECT_H

#include "qdialog.h"
#include "qlistwidget.h"



namespace Ui {
class select;
}

class select : public QDialog
{
    Q_OBJECT

public:
    explicit select(QDialog *parent = nullptr);
    void display();
    void add_user(std::string& new_user_name);
    ~select();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::select *ui;
};

#endif // SELECT_H
