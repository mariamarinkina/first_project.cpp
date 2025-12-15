#include <iostream>
using namespace std;

int main(){
    int elements[7]={1,4,3,6,7,2,9};
    double sum=0;

    for(int i=0; i<7; i++){
        sum+=elements[i];
    }
    cout<<"сумма 7 цифр равна: "<<sum<<", среднее значение: "<<sum/5<<endl;
    return 0;
}