#include <iostream>
using namespace std;

double average(int a, int b, int c){
    return(a+b+c)/3.0;
}

int main(){
    int a,b,c;
    cout<<"введите 3 числа: ";
    cin>>a>>b>>c;

    double avg=average(a,b,c);
    cout<<"среднее арифметическое: "<<avg<<endl;

    return 0;
}