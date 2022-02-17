#include <iostream>

using namespace std;

int main ()
{
    float hr_t, hr_v, salario;
    char nome[10];
    cout << "\nQual seu nome? "; cin >> nome;
    cout << "\nHoras Trabalhadas: "; cin >> hr_t;
    cout << "\nValor Hora: "; cin >> hr_v;
    salario = hr_t*hr_v;
    cout << "O pagamento para: " << nome << "Deve ser: " << salario << endl;

}