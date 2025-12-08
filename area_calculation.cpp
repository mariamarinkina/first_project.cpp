#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    cout<<"введите два числа для сторон прямоугольника и одно для радиуса круга: ";
    cin>>a>>b>>c;
    double p=3.14;

    cout<<"площадь квадрата: "<<a*a<<". \n";
    cout<<"площадь прямоугольника: "<<a*b<<". \n";
    cout<<"площадь круга: "<<p*c*c<<". \n";
    return 0;
}