/*string name;
int age;

cout << "Введите имя: ";
getline(cin, name);

cout << "Введите возраст: ";
getline(cin, age);

cout << "Привет " << name << " тебе " << age << " лет!";
*/
#include <iostream>
#include <string>
int main(){
    std::string name;
    int age;

    std::cout << "Введите имя: ";
    getline(std::cin, name);

    std::cout << "Введите возраст: ";
    std::cin >> age;

    std::cout << "Привет, " << name << ", тебе " << age << " лет!\n";
    return 0;
}