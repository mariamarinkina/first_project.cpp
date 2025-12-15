#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"введите n>0: ";
    cin>>n;

    double sum=0;
    double fact=1;

    for(int i=1; i<=n; i++){
        fact*=i;
        sum+=1.0/fact;
    }

    cout<<"сумма: "<<sum;

    return 0;
}