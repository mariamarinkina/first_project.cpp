//Hn​≈ln(n)+γ+1/(2n)-ф-ла​ гармонического ряда. 
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double n;
    cout<<"ведите n:  ";
    cin>>n;
    const double g=0.577;

    double H=log(n)+g+1/(2*n); //g-гамма
    cout<<"гармонический ряд равен "<<H<<". \n";
    return 0;

}