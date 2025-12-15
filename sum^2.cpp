#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;

    cout<<"введите n>0: ";
    cin>>n;

    double sum=0;

    for(int i=1; i<=n; i++){
        sum+=1.0/(i*1);
    }

    cout<<"сумма: "<<sum;

    return 0;
}