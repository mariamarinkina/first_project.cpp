#include <iostream>
using std::cin, std::cout;

int main(){
    int n;
    int arr[100];

    cout<<"введите n: ";
    cin>>n;

    for(int i=0; i<n;i++){
        arr[i]=i+1;
    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    return 0; 

}