#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int dif(int a, int b){
    return a-b;
}

int main(){
    int x,y;
    cout<<"введите х и у: ";
    cin>>x>>y;

    int s = sum(x,y);
    cout<<"cумма: "<<s<<endl;

    int d = dif(x,y);
    cout<<"разность: "<<d<<endl;

    return 0;

}