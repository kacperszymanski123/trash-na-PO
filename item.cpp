#include "item.h"

item::item(std::string& name_val, std::string& description_val, bool status_val = false) :
    name(name_val), status(status_val), description(description_val)  {}

std::string item::get_name() const {
    return name;
}

void item::set_name(std::string& new_name) {
    name = new_name;
}

bool item::get_status() const {
    return status;
}

void item::set_status(bool new_state) {
    status = new_state;
}

std::string item::get_description() const {
    return description;
}

void item::set_description(std::string& new_description) {
    description = new_description;
}

void item::to_save_name(){
    for (char &ch : name) {
        if (ch == ' ') {
            ch = '-';
        }
    }
}

void item::to_read_name(){
    for (char &ch : name) {
        if (ch == '-') {
            ch = ' ';
        }
    }
}

void item::to_save_description(){
    for (char &ch : description) {
        if (ch == ' ') {
            ch = '-';
        }
    }
}

void item::to_read_description(){
    for (char &ch : description) {
        if (ch == '-') {
            ch = ' ';
        }
    }
}

std::string item::get_description2() const {
    return description;
}
