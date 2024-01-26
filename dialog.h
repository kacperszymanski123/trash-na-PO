#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr, std::string new_val = {});
    ~Dialog();

private:
    Ui::Dialog *ui;
    std::string desc;
};

#endif // DIALOG_H
