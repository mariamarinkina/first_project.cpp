#include <iostream>
using std::cout, std::endl;

int main(){
    int sum=0;
    int a[4][4];
    int x=0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            a[i][j]=x;
            x++;
        }
        cout<<endl;
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<4; i++){
        sum+=a[i][i];
    }
    cout<<"sum="<<sum<<"\n";

    return 0;
}