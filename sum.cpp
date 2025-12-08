#include<iostream>
using namespace std;

int main(){
    int n;
    double sum=0;
    int i=2;

    cout<<"введите n>1: ";
    cin>>n;

    while(i<=n){
        sum=sum+1.0/i;
        i++;
    }

    cout<<"cумма равна: "<<sum;
    
    return 0;
}