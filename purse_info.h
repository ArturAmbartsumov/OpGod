#ifndef PURSE_INFO_H
#define PURSE_INFO_H

struct Purse_Info {
    int id;
    string purse_type;
    double balance;
    string creation_date;
    bool ban_status;
    Purse_Info(): id(0), balance(0), ban_status(1) {}
};

#endif // PURSE_INFO_H
