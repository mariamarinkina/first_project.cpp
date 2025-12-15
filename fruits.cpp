#include <iostream>
using namespace std;

int main(){
    string fruits[5]={"апельсин", "хурма", "мандарин", "банан", "кошатина"};

    cout<<"мои любимые фрукты:\n";

    for(int i=0;i<5;i++){
        cout<<fruits[i]<<endl;
    }
    return 0;
}