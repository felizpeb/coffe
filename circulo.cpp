#include <iostream>
#include <iomanip> //  para utilizar o setprecision(2)
#include <math.h> // para fazer potenciacao x²...

#define C_PI           3.14159265358979323846  /* CONSTANTES PŔE DEFINIDAS */ 

using namespace std;
/*
-------------------------------------------------------------------------
Problema "circulo"
Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟 . Você pode
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
diretamente o valor 3.14159.
-------------------------------------------------------------------------
*/

int main() 
{
    float r, area;
    cout << "Digite o valor do raio: "; cin >> r;
    area = pow(r,2)*C_PI;
    cout << setprecision(5); // mostra me mais algrarismos
    cout << " O valor da area e: " << setw(1) << area << endl;

}