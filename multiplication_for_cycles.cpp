#include<iostream>
using namespace std;

int main(){
    int n;
    int p=1;
    int i=1;

    cout<<"введите n: ";
    cin>>n;

    while(i<=n){
        p=p*i;
        i+=2;
    }

    cout<<"произведение нечётных чисел равно "<<p;

    return 0;
}