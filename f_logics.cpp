#include <iostream>
using std::cout;

void hello(){
    cout<<"hello!\n";
}
void line(){
    cout<<"----------\n";
}
void bye(){
    cout<<"bye!!!\n";
}

int main(){
    line();
    hello();
    line();
    bye();
    line();

    return 0;
}