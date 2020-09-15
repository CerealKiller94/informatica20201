#include <iostream>

using namespace std;

int main()
{
    int max_letras = 0;
    cout <<"Digite la cantidad de letras que quiere mostrar" << endl;
    cin >> max_letras;
    char letra = 'A';
    int blancos = max_letras*2 -3;
    int num_letras = 1;

    for(int i=0; i<max_letras; i++){
        if (blancos > 0){
            for(int j=0; j<num_letras; j++){
                cout << letra;
                letra++;
            }
            for(int j=0; j<blancos; j++){
                cout << " ";
            }
            for(int j=0; j<num_letras; j++){
               letra--;
               cout <<letra;
            }
            letra = 'A';
            blancos -= 2;
            num_letras++;
        }
        else{
            for(int j=0; j<num_letras; j++){
                cout << letra;
                letra++;
            }
            letra-=2;
            for(int j=0; j<num_letras-1; j++){
                cout << letra;
                letra--;
            }
        }
        cout <<endl;
    }

    letra = 'A';
    blancos = 1;
    num_letras--;

    for(int i=0; i<max_letras-1; i++){
        for(int j=0; j<num_letras; j++){
            cout << letra;
            letra++;
        }
        for(int j=0; j<blancos; j++){
            cout << " ";
        }
        for(int j=0; j<num_letras; j++){
            letra--;
            cout << letra;
        }
        num_letras--;
        cout << endl;
        blancos += 2;
    }

    return 0;
}
