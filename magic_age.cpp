#include<iostream>
#include<string>
int main(){
    int age;
    std::string name;

    std::cout<<"как тебя зовут? ";
    std::cin>>name;
    std::cout<<"скока лет? ";
    std::cin>>age;
    std::cout<<"привет, "<<name<<"! Тебе "<<age<<" лет. \n";
    std::cout<<"через год тебе будет "<<age+1<<" лет!!!!!\n";
    
    return 0;
}