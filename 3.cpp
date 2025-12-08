/*Определить результат битового сдвига влево (переменные
целочисленные) в выражении a >> k, где a = 2, а k = n % 5
(n=16)*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a=2;
    int n=16;
    int k=n%5;

    int result=a>>k;
    
    cout<<result;

    return 0;
}