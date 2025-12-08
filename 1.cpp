#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    int y;
    int z;
    double w;

    cout<<"введите х, которое не равно 0: ";
    cin>>x;
    cout<<"введите y: ";
    cin>>y;
    cout<<"введите z, которое не равно 0: ";
    cin>>z;

    w=sin((y-sqrt(fabs(x))*(x-(y/(pow(z,2)+(pow(x,2)/4))))));

    cout<<"уравнение равно "<<w;

    return 0;
}