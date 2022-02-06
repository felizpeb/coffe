/*

Faça um programa que calcule o salário líquido de um profissional que trabalhe por
hora. Para tanto, é necessário possuir alguns dados básicos, tais como valor da hora de
trabalho, número de horas trabalhadas no mês e o percentual de desconto do INSS, para
que seja possível apresentar os resultados do valor do salário bruto, valor de desconto e o
valor do salário líquido.
Após o programa escrito, Entre com: 10.33, 12.5 e 6.5 e a saída deve ser:
129.125, 8.39312 e 120.732.

*/

#include <iostream>
#include <iomanip>

using namespace std;
int main(void)
{
    float HT, VH, PD, TD, SB, SL;
    cout << setprecision(2); //Fixa em duas casas decimais
    cout << setiosflags(ios::right); //Tabulação a partir da direita
    cout << setiosflags(ios::fixed); //Estabelece a apresentação do ponto decimal

    cout << "Entre com a quantidade de horas trabalhadas.: "; cin >> HT;
    cout << "Entre com o valor da hora de trabalho..............: "; cin >> VH;
    cout << "Entre com o valor do percentual de desconto..: "; cin >> PD;
    
    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;
    
    cout << "O Salario Bruto....: " << setw(8) << SB << endl;
    cout << "Desconto..............: " << setw(8) << TD << endl;
    cout << "O Salario Liquido.: " << setw(8) << SL << endl;
    
    return 0;
}
