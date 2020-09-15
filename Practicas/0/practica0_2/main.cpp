#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numero;
    int suma = 0;
    int digito;

    cout << "Escriba un numero entero: " << endl;
    cin >> numero;
    digito = numero % 10;
    while(digito != 0){
        numero = numero/10;
        suma += pow(digito, digito);
        digito = numero % 10;
    }

    cout << "La suma de los digitos elevados a si mismo es: " << suma << endl;
    return 0;
}
