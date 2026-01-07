#include <iostream>
using std::cout, std::cin, std::endl;

int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        cout<<"введите число: ";
        cin>>arr[i];
    }

    int sum=0;

    for(int i=0; i<10; i++){
        sum+=i;
    }
    cout<<"sum="<<sum<<endl;

    double avg = sum/10.0;
    cout<<"среднее равно "<<avg<<endl;



    int max=arr[0], min=arr[0];

    for(int i=1; i<10; i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }

    cout<<"mаx="<<max<<" min="<<min<<endl;
}