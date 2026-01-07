#include <iostream>
using std::cout, std::endl;

int main(){
    int a[3][3];
    //int x=1;

    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            a[i][j]=(i+1)*(j+1);
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}