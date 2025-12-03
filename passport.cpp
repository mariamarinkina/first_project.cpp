#include <iostream>
#include <string>
int main(){
    std::string name="Диппер";
    int age=14;
    double height=1.56;
    std::string star="Большая медведица";

    std::cout<<"======= Паспорт Диппера =======\n";
    std::cout<<"Имя: "<<name<<". \n";
    std::cout<<"Возраст: "<<age<<". \n";
    std::cout<<"Рост: "<<height<<". \n";
    std::cout<<"Созвездие на лбу у Диппера: "<<star<<". \n";
    std::cout<<"===============================\n";   
    return 0;
}