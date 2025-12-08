#include <iostream>
using namespace std;

int main(){
    int n;
    long long p=1;

        cout<<"введите n: ";
    cin>>n;

    if(n<=1){
        cout<<"пожалуйста, придумайте число больше 1 =)\n";
    }
    else {cout<<"чётные числа: ";
    for(int i=2; i<=n; i+=2){
        cout<<i<<" ";
        p=p*i;
    }
    cout<<"\nпроизведение чётных чисел равно "<<p<<". \n";
    }
    return 0;
}