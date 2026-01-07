#include <iostream>
using std::cout, std::cin;

double x, y;
char op;

int main(){
    cout<<"введите х, у и операцию над ними: ";
    cin>>x>>y>>op;

    switch(op){
        case '+':
            cout<<x+y;
            break;
        case '*':
            cout<<x*y;
            break;
        case '/':
            cout<<x/y;
            break;
        case '-':
            cout<<x-y;
            break;
        
    }
    return 0;
}