#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{

    float n1, n2, n3, n4, media;

    cout << "\nDigite o valor do primeiro bimestre: ";
    cin >> n1;
    cout << "\nDigite o valor do segundo bimestre: ";
    cin >> n2;
    cout << "\nDigite o valor do terceiro bimestre: ";
    cin >> n3;
    cout << "\nDigite o valor do quarto bimestre: ";
    cin >> n4;

    media = (n1+n2+n3+n4)/4;

    cout << "A sua media e " << fixed << setprecision(2) << media << endl;
     
    return 0;
    

}