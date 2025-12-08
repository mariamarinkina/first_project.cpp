#include <iostream>
#include <string>
int main(){
    std::string day;
    std::string mood;
    std::cout<<"как прошёл день? ";
    getline(std::cin, day);
    std::cout<<"как настроение? ";
    getline(std::cin,mood);
    std::cout<<"Сегодняшний отчёт: \n";
    std::cout<<"ваш день прошёл: "<<day<<".\nнастроение: "<<mood<<".\n";
    return 0;
}