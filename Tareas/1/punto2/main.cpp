#include <iostream>

using namespace std;

int main()
{
    double al1, bl1, cl2, dl2, xcorte, ycorte;
    cout << " -- Encontremos el punto de intersección de dos rectas de la forma y = mx + b -- " << endl;
    cout << " Recta 1: " << endl;
    cout << "Digite el coeficiente de X para la primera recta" << endl;
    cin >> al1;
    cout << "Digite el valor constante para la primera recta" << endl;
    cin >> bl1;
    cout << " Recta 2: " << endl;
    cout << "Digite el coeficiente de X para la segunda recta" << endl;
    cin >> cl2;
    cout << "Digite el valor constante para la segunda recta" << endl;
    cin >> dl2;

    if (al1 - dl2 == 0){
        cout << "Las rectas nunca se cortan: " << endl;
    }
    else{
        xcorte = (dl2 - bl1)/(al1 - cl2);
        ycorte = al1*xcorte + (bl1);
        cout << "Las rectas se cortan en el punto: (" << xcorte << "," << ycorte << ")" << endl;
    }
    return 0;
}
