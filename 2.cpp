#include <iostream>
#include <cmath>
using namespace std;
#include <algorithm>

int main(){
    double x;
    double y;
    double z;

    cout<<"x: ";
    cin>>x;

    cout<<"y: ";
    cin>>y;

    cout<<"z: ";
    cin>>z;

    double sin1=sin(x+y+z);
    double cos1 = cos(x*y*z);

    double w=max(sin1,cos1);

    cout<<"уравнение равно "<<3+w;

    return 0;

}

