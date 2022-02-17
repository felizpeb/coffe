#include <iostream>
#include <iomanip> //  para utilizar o setprecision(2)
#include <math.h> // para fazer potenciacao x²...

using namespace std;

int main ()
{
    int duracao, resto, horas, minutos, segundos;
    cin >> duracao;

    horas = duracao/3600;
    resto = duracao%3600;

    minutos = resto/60;
    segundos = resto%60;
    
    cout << horas << ":"<< minutos << ":" << segundos << endl;

}
