#include <iostream>
using std::cout;

int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        int elem=i/2+1;
        arr[i]=elem;
        cout<<arr[i]<<" ";
    }
    return 0;
}