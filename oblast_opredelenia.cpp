#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x;

    cout<<"введите х: ";
    cin>>x;

    if ((x>0 && x<1)||(x>2 && x<3)){
        cout<<"YES. ";
    }else{
        cout<<"NO. ";
    }

    return 0;
    
}