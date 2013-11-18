#ifndef USER_INFO_H
#define USER_INFO_H

struct User_Info {
    int id;
    string first_name;
    string sur_name;
    string email;
    string registration_date;
    bool ban;
    User_Info(): id(0), ban(1) {}
};

#endif // USER_INFO_H
