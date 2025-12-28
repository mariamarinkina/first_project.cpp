#include <iostream>
using std::cout;

int main(){
    int arr[10];
     
    for(int i=0; i<10; i++){
        int elements = i/2+1;

        if (i%2==0)
            arr[i]=elements;
        else
        arr[i]=-elements;
    }

    for (int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}