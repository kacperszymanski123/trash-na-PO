#ifndef DAY_H
#define DAY_H

#include <string>
#include <vector>

#include <toDo.h>
#include <toCook.h>
#include <item.h>

class day
{
private:
    std::string name;
public:
    day(std::string& name_val) : name(name_val)
    {}

    std::vector<toDo> all_to_do {};
    std::vector<toCook> all_to_cook {};

    std::string get_name() const{
        return name;
    }

    void add_new_item(toDo& new_item){
        all_to_do.push_back(new_item);
    }

    void add_new_item(toCook& new_item){
        all_to_cook.push_back(new_item);
    }
};

#endif // DAY_H
