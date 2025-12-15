#include <iostream>
using namespace std;

int main(){
    int x;

    cout<<"введите целое число x: ";
    cin>>x;

    if(x%2==0){
        cout<<"число х - чётное\n";
    } else{ 
        cout<<"нечётное\n";
    } if(x>0){
        cout<<"x - положительное\n";
    } else if(x<0){
        cout<<"отрицательное\n";
    } else{
        cout<<"x=0\n";
    }
    return 0;
}