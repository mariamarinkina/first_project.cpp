#include <iostream>
#include <cmath>
#include <iomanip>
#include <complex>
using namespace std;

int main(){
    double a,b,c;
    cout<<"введите a, b, c: ";
    cin>>a>>b>>c;

    double D=b*b-4*a*c;
    cout<<fixed<<setprecision(6); // выводим все числа с 6 цифрами после запятой
    cout<<"D="<<D<<"\n";

    if(D<0){
        complex<double> A(a);
        complex<double> B(b);
        complex<double> D_complex = complex<double>(D);   // D < 0, но комплексная форма позволяет корень извлечь

        complex<double> x1 = (-B - sqrt(D_complex)) / (2.0 * A);
        complex<double> x2 = (-B + sqrt(D_complex)) / (2.0 * A);

        cout << "Корни комплексные:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } else if(D==0){
        cout<<"существует единственный х, равный "<<(-b-sqrt(D))/(2*a)<<"\n";
    } else{

        double x1=(-b-sqrt(D))/(2*a);
        double x2=(-b+sqrt(D))/(2*a);
        cout<<"x один равен "<<x1<<", а х два равен "<<x2;
    }
    return 0;
}