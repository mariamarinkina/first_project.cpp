#include <iostream>
using std::cout, std::endl;

int main(){
    int arr[100];

    for(int i=0; i<10; i++){
        arr[i]=2*(i+1);
        cout<<arr[i]<<endl;
    }
    return 0;
}