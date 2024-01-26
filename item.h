#ifndef ITEM_H
#define ITEM_H

#include <string>

class item
{
protected:
    std::string name;
    bool status;
    std::string description;

public:
    item(std::string& name_val, std::string& description_val, bool status);
    std::string get_name() const;
    void set_name(std::string& new_name);

    bool get_status() const;
    void set_status(bool new_state = true);

    virtual std::string get_description() const;
    void set_description(std::string& new_description);
    void to_save_name();
    void to_read_name();
    void to_save_description();
    void to_read_description();
    std::string get_description2() const;
};

#endif // ITEM_H
