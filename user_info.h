#ifndef USER_INFO_H
#define USER_INFO_H

#include <string>

struct User_Info {
    int id;
    std::string first_name;
    std::string sur_name;
    std::string email;
    std::string registration_date;
    bool ban;
    User_Info(): id(0), ban(1) {}
};

#endif // USER_INFO_H
