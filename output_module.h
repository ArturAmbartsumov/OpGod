#ifndef OUTPUT_MODULE_H
#define OUTPUT_MODULE_H

#include <string>
#include <vector>
#include "user_info.h"
#include "purse_info.h"

class Output_module
{
public:
    Output_module();

    //Поля вывода информации
    void print_menu(std::string); //через него выводить всю информацию по навигации
    void print_info(User_Info); //через него выводить подробную информацию о пользователе
    void print_userlist(std::vector<User_Info>); //сюда выводить список юзеров для админа
    void print_purselist(std::vector<Purse_Info>); //сюда выводить список кошельков
    void print_central(std::string); //центральное поле - сюда выводить все запросы к пользователю(например: введите логин или ваш баланс столько-то)
    void print_errorfield(std::string); //сюда все ошибки

    //Шаблоны вывода
    void admin_main_menu();
    void user_name_menu();
    //..............
    //..............

    //нужно только для консоли
    void clear_screen();
};

#endif // OUTPUT_MODULE_H
