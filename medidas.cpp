#include <iostream>
#include <iomanip> //  para utilizar o setprecision(2)
#include <math.h> // para fazer potenciacao x²...

using namespace std;

int main ()
{
    float a, b, c, area_quadrado, area_triangulo, area_trapezio;
    cout << "\nDigite a medida A: "; cin >> a;
    cout << "\nDigite a medida B: "; cin >> b;
    cout << "\nDigite a medida C: "; cin >> c;
    area_quadrado = pow(a,2);
    area_triangulo = a*b/2;
    area_trapezio = (a+b)*c/2;
    cout << setprecision(6);
    cout << "\nAREA DO QUADRADO = "  << area_quadrado;
    cout << "\nAREA DO TRIANGULO = "  << area_triangulo;
    cout << "\nAREA DO TRAPEZIO = " << area_trapezio << endl;
}