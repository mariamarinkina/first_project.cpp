#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;

    cout<<"введите целые значения сторон a, b, c, большие 0: ";
    cin>>a>>b>>c;

    if(a<b+c && b<a+c && c<a+b){
        cout<<"треугольник существует, ";
        if(a==b==c){
            cout<<"он равносторонний. ";
        } else if(a==b || a==c || b==c){
            cout<<"он равнобедренный. ";
        } else{
            cout<<"он разносторонний. ";
        }
    } else{
        cout<<"треугольника не существует. ";
    }

    return 0;
    
}