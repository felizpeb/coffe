#include <iostream>

/*
Problema "troco"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
Exemplo 1:
Preço unitário do produto: 8.00
Quantidade comprada: 2
Dinheiro recebido: 20.00
TROCO = 4.00
Exemplo 2:
Preço unitário do produto: 30.00
Quantidade comprada: 3
Dinheiro recebido: 100.00
TROCO = 10.00

*/

using namespace std;

int main () {

    float x, y, v, t; 

    cout << "Preco do produto: "; cin >> x;
    cout << "Quantidade comprada: "; cin >> y; 
    cout << "Valor recebido: "; cin >> v;
    t=v-(x*y); 
    cout << "Troco a ser devolvido: " << t << endl;

}