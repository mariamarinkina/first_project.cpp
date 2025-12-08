/*Определить результат битового сдвига вправо (переменные
целочисленные) в выражении a >> k, где a = 256, а
k = n % 5 (n=16).*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a=256;
    int n=16;
    int k=n%5;

    int result=a>>k;

    cout<<result;

    return 0;
}