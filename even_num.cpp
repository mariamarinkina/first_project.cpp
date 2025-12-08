#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;

    cout<<"введите n: ";
    cin>>n;

    cout<<"чётные числа: ";
    for(int i=2; i<=n; i+=2){
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"\nсумма чётных чисел: "<<sum<<". \n";
    return 0;
}