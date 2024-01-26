#ifndef TODO_H
#define TODO_H

#include "item.h"

class toDo : public item
{
public:
    toDo(std::string& name_val, std::string& description_val, bool status_val = false) :
        item(name_val, description_val, status_val) {};

    std::string get_description() const {
        return "Task description:\n" + description;
    }
};

#endif // TODO_H
