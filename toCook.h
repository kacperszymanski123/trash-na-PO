#ifndef TOCOOK_H
#define TOCOOK_H

#include "item.h"

class toCook : public item
{
public:
    toCook(std::string& name_val, std::string& description_val, bool status_val = false) :
        item(name_val, description_val, status_val) {};

    std::string get_description() const {
        return "Recipe:\n" + description;
    }

};

#endif // TOCOOK_H
