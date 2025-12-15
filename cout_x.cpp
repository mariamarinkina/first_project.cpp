#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"введите любое x: ";
    cin>>x;

    if(x>0){
        cout<<"положительное число, ";
    }else if(x==0){
        cout<<"равно 0, ";
    }else{
        cout<<"отрицательное, ";
    }

    if(x%2==0){
        cout<<"чётное. \n";
    }else{
        cout<<"нечётное. \n";
    }

    return 0;

}