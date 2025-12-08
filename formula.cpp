#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x,y;

    cout<<"введите x: ";
    cin>> x;

    y=(sin(x)+sqrt(abs(x)))/(1+pow(x,2));
    cout<<"у равен: "<<y<<". \n";
    return 0;
}