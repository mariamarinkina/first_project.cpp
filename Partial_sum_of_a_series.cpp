#include <iostream>
using namespace std;

int main(){
    int n;
    double sum=0;
    int i=1;

    cout<<"введите натуральное число n: ";
    cin>>n;

    while(i<=n){
        sum=sum+1/pow(i,2);
        i++;
    }
    cout<<"частичная сумма ряда равна "<<sum;
    return 0;
}