#include<iostream>
#include <string>
int main(){
    std::string full_name;
    std::string love_color;
    std::string love_animal;
    int age;
    std::cout<<"введите фио: ";
    getline(std::cin, full_name);
    std::cout<<"любuмый цвет? ";
    getline(std::cin, love_color);
    std::cout<<"любимое животное? ";
    getline(std::cin, love_animal);
    std::cout<<"скока лет? ";
    std::cin>>age;
    std::cout<<"привет, "<<full_name<<"! тебе "<<age<<" лет. твой любимый цвет: "<<love_color<<", а твоё любимое животное - "<<love_animal<<".\n";
    return 0;
}