#include <iostream>
using std::cout, std::cin;
int x;
int main(){
    cout<<"введите х от 1 до 3: ";
    cin>>x;

    switch (x){
    case 1:
        cout<<"один";
        break;

    case 2:
        cout<<"два";
        break;

    case 3:
        cout<<"три";
        break;

    default:
        cout<<"выходит за рамки допустимого!";
        break;
    }
    return 0;
}