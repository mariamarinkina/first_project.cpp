#include <iostream>
using std::cout, std::cin;
int num, x;

int main(){
    cout<<"введите номер из меню: ";
    cin>>num;

    switch(num){
        case 1: 
            cout<<"привет!";
            break;
        case 2: 
            cout<<"введите число: ";
            cin>>x;
            cout<<pow(x,2);
            break;
        case 3: 
            cout<<"введите число: ";
            cin>>x;
            if(x%2==0){
                cout<<"чётное";
            }
            else{
                cout<<"нечётное";
            }
            break;
        case 4: 
            break;
        default:
            cout<<"от 1 до 4! ";
            break;
    }

}
