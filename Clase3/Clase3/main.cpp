#include <iostream>

using namespace std;

int main()
{
    int contador = 0;

    for(int i=4; i<100; i+=4 ){
        if(i%12 == 0){
            cout << ++contador << ": " << i << endl;
        }
    }

    cout << "Fin" << endl;
    return 0;
}
