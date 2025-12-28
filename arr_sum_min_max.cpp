#include <iostream>
using std::cin, std::cout, std::endl;

int main(){
    int sum=0;
    int n=5;

    int arr[5]={1,3,5,7,3};

    int max=arr[0];
    int min=arr[0];

    for(int i=0; i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<" - cумма. \n";

    for(int i=0; i<n; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min="<<min<<", max="<<max<<endl;

    return 0; 

}