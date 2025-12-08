#include <iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"введите n: ";
    cin>>n;
    cout<<"чётные числа до n: ";
    for (int i=2; i<=n; i+=2){
        cout<<i<< " ";
        count++;
    }  
    cout<<"\nвсего чисел: "<<count;
    return 0;
}