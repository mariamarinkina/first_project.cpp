#include <iostream>
using std::cout;

int main(){
    int arr[10];

    for (int i=0; i<10; i++){
        int el=i/2+1;

        if((i/2)%2==0){
            if(i%2==0)
                arr[i]=el;
            else
                arr[i]=-el;
        }else{
            if(i%2==0)
                arr[i]=-el;
            else
                arr[i]=el;
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}