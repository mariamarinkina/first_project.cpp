/*исправить ошибки: 
int age = "15";
string name = Anna;
double price = 10,5;
char letter = "A";
*/
#include <iostream>
#include <string>
int main(){
    int age = 15;
    std::string name = "Anna";
    double price = 10.5;
    char letter = 'A';
    std::cout<<age<<" "<<name<<" "<<price<<" "<<letter<<". \n";
    return 0;
}