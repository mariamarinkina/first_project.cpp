#include <iostream>
using namespace std;

int main(){
    int el[10]={12,69,91,4,1,8,8,15,103,67};
    int max=el[0];

    for(int i=1; i<10; i++){
        if(el[i]>max){
            max=el[i];
        }
    }
    cout<<"макисмальное число: "<<max<<endl;

    int min=el[0];

    for(int i=1; i<10; i++){
        if(el[i]<min){
            min=el[i];
        }
    }
    cout<<"минимальное число: "<<min<<endl;

    cout<<"разность максимального u минимального числа: "<<max-min<<endl;
    return 0;
}