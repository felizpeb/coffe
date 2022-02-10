#include <iostream>
#include <iomanip> //  para utilizar o setprecision(2)

/*
Problema "idades"
fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.

Dados da primeira pessoa:
Nome: Maria Silva
Idade: 19
Dados da segunda pessoa:
Nome: Joao Melo
Idade 20
A idade média de Maria Silva e Joao Melo é de 19.5 anos

*/

using namespace std;

int main ()

{

    float id1, id2, resultado;
    char name1[10],name2[10];
    cout << "\ninformacoes da primeira pessoa";
    cout << "\n";
    cout << "\nDigite o nome:";
    cin >> name1;
    cout << "\nDigite a idade";
    cin >> id1;
    cout << "Agora da segunda pessoa";
    cout << "\n";
    cout << "\nDigite o nome:";
    cin >> name2;
    cout << "\nDigite a idade";
    cin >> id2;

    resultado = (id1 + id2)/2; // forumla para tirar a média

    //cout << setprecision(1); //Fixa em uma casas decimais


    cout << "\n Informacoes da Primeira pessoa ";
    cout << "\n";
    cout << "\nNome: " << name1;
    cout << "\nIdade: " << id1; 
    cout << "\n Informacoes da Segunda pessoa ";
    cout << "\n";
    cout << "\nNome: " << name2;
    cout << "\nIdade: " << id2; 
    cout << "\n";
    cout << " A idade media de" << fixed << setprecision(1) << name1 << " e " << name2 << " e de " << resultado << " anos." << endl;
}