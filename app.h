#ifndef APP_H
#define APP_H

#include "day.h"
#include <string>
#include <vector>
#include <fstream>

class app
{
private:
    std::string file_name;
    std::string tmp_file;
public:
    app(std::string& file_name_val) : file_name(file_name_val), tmp_file("C:\\Users\\kacpe\\Documents\\to_do_app\\" + file_name){
        read();
        };

    std::vector<day> all_days;
    void read(){
        std::string name_tmp = "Monday";
        all_days.push_back(day(name_tmp));
        name_tmp = "Tuesday";
        all_days.push_back(day(name_tmp));
        name_tmp = "Wednesday";
        all_days.push_back(day(name_tmp));
        name_tmp = "Thursday";
        all_days.push_back(day(name_tmp));
        name_tmp = "Friday";
        all_days.push_back(day(name_tmp));
        name_tmp = "Saturday";
        all_days.push_back(day(name_tmp));
        name_tmp = "Sunday";
        all_days.push_back(day(name_tmp));


        std::ifstream file(tmp_file);
        if(file.is_open()){
            int i = -1;
            char type{};
            std::string name{};
            std::string description{};
            bool status{};
            while(file >> type) {
                if(type == 'd'){
                    file >> name;
                    i++;
                }else if(type == 'c'){
                    file >> name >> description >> status;
                    toCook tmp(name, description, status);
                    tmp.to_read_name();
                    tmp.to_read_description();
                    all_days[i].all_to_cook.push_back(tmp);
                }else if(type == 'k'){
                    file >> name >> description >> status;
                    toDo tmp(name, description, status);
                    tmp.to_read_name();
                    tmp.to_read_description();
                    all_days[i].all_to_do.push_back(tmp);
                }
            }
        }
    }

    void save(){
        std::ofstream file(tmp_file);

        if(file.is_open()){
            for (auto& day : all_days) {
                file << "d " << day.get_name() << std::endl;
                for (auto& tocook : day.all_to_cook){
                    tocook.to_save_name();
                    tocook.to_save_description();

                    file << "c " << tocook.get_name() << " " << tocook.get_description2() <<  " "
                         << tocook.get_status() << std::endl;
                }
                for (auto& todo : day.all_to_do){
                    todo.to_save_name();
                    todo.to_save_description();

                    file << "k " << todo.get_name() << " " << todo.get_description2() <<  " "
                         << todo.get_status() << std::endl;
                }
            }
        }
        file.close();
     }
};

#endif // APP_H
