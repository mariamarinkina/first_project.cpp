#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c;

    cout<<"введите a, b и c для того, чтобы посчитать дискриминант: ";
    cin>>a>>b>>c;

    double D=pow(b,2)-4*a*c;
    cout<<"дискриминант равен "<<D<<". \n";
    cout<<"х один равен "<<(-b-sqrt(D))/(2*a)<<"\n";
    cout<<"х два равен "<<(-b+sqrt(D))/(2*a)<<"\n";
    return 0;
}