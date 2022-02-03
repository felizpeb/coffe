#include <iostream>
#include <iomanip> // utilizei essa biblioteca para utilizar o setprecision(2) 

using namespace std;

int main()
{
    float largura_x, comprimento_y, metro_quadrado, preco, area;

    cout << "Digite a largura do terreno ";
    cin >> largura_x;
    cout << "Digite o comprimento do terreno ";
    cin >> comprimento_y;
    cout << "Digite o valor do metro quadrado ";
    cin >> metro_quadrado;

    area = largura_x*comprimento_y;
    preco = area*metro_quadrado;

    cout << "\nArea do terreno = " << fixed << setprecision(2) << area; // setprecision(2) vai almentar as casas decimais do valor float
    cout << "\nPreco do terreno =" << fixed << setprecision(2) << preco << endl;

return 0;
    
}
// ok
