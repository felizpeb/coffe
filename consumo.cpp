#include <iostream>
#include <iomanip> //  para utilizar o setprecision(2)

using namespace std;

int main ()
{
    float consumo, km, gasolina;
    cout << "Digite a distancia percorrida: "; cin >> km;
    cout << "Gasto de combustivel: "; cin >> gasolina;
    consumo = km/gasolina;
    cout << setprecision(5);
    cout << "o Seu consumo medio e de " << setw(6) << consumo << endl;
}