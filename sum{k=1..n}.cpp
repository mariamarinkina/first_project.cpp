#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"введите n>0: ";
    cin>>n;


    double sum=0;

    for (int i=1;i<=n;i++){
        sum+=1.0/(2*i);
    }

    cout<<"сумма: "<<sum<<". \n";

    return 0;

}
