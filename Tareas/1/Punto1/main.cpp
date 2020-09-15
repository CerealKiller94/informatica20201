#include <iostream>

using namespace std;

int main()
{
    double nota = 0;
    double porcentaje = 0;
    double notas = 0;
    char resp = 's';

    cout << " --- Calculo de las notas ---" << endl;

    do{
        cout << "Digite el valor de la nota: " << endl;
        cin >> nota;
        cout << "Cual es el porcentaje de la nota?" << endl;
        cin >> porcentaje;
        notas += nota * (porcentaje/100);

        cout << "Quiere agregar otra nota? s/n" << endl;
        cin >> resp;

    }while(resp == 's');

    cout << "La nota final del alumno es: " << notas << endl;
    return 0;
}
