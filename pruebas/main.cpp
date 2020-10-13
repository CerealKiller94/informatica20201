#include <iostream>

using namespace std;
void llenarMatriz(int, int, int*);
void mostrarMatriz(int, int, int*);
bool isMagicSquare(int , int , int*);
bool tieneElementosRepetidos(int, int, int*);

int main()

{   short int rows = -1;
    short int columns = -1;
    while(rows == -1 || columns == -1){
        cout << "Escriba el numero de filas de la matriz 0 para salir" << endl;
        cin >> rows;
        if(rows == 0){
            cout << "Salir" << endl;
            return 0;
        }
        cout << "Escriba el numero de columnas de la matriz 0 para salir" << endl;
        cin >> columns;
        if(columns == 0){
            cout << "Salir" << endl;
            return 0;
        }

        if (rows > 0 && columns >> 0){
            break;
        }

        cout << "Dimension no valida" << endl;

    }

    int matriz[rows][columns];
    int *celda = &matriz[0][0];
    llenarMatriz(rows, columns, celda);
    if(tieneElementosRepetidos(rows, columns, celda)){
        cout << "La matriz tiene elementos repetidos. No es un cuadrado magico" << endl;
    }
    else if(isMagicSquare(rows, columns, celda)){
        cout << "La matriz es un cuadrado magico" << endl;
    }
    else{
        cout << "La matriz no es un cuadrado magico" << endl;
    }

    return 0;
}


bool tieneElementosRepetidos(int rows, int columns, int* celda){
    int numeros[rows*columns];
    int* numero = numeros;
    int cantidad = 1;
    *numero = *celda;
    int i=1;
    while(i < rows*columns){
        for(int k=0; k<cantidad; k++){
            if(*(numero + k) == *(celda + i)){
                return true;
            }
        }
        *(numero + cantidad) = *(celda + i);
        ++cantidad;
        ++i;
    }
    return false;
}

void llenarMatriz(int rows, int columns, int *celda){
    for(int r=0; r<rows; r++){
        for(int c=0; c<columns; c++){
            cout << "Digite el elemento de la fila: " << r+1 << " columna: " << c+1 << endl;
            cin >> *celda;
            celda = celda + 1;
        }
    }
}

bool isMagicSquare(int rows, int columns, int *celda){
    int sumaControl = 0;
    int suma = 0;
    int i = 0;

    for(int i=0; i<rows*columns; i = i + (rows+1)){
        sumaControl += *(celda + i);
    }

    i = rows - 1;

    while(i <= ((rows*columns) - (rows - 1))){
        suma += *(celda + i);
        i = i + (rows-1);
    }

    if(suma != sumaControl){
        cout << "Diagonal secundaria" << endl;
        return false;
    }

    for(int i=0; i<columns; i++){
        suma = 0;
        for(int k=0; k<rows*columns; k = k+rows){
            suma += *(celda + i + k);
        }
        if(suma != sumaControl){
            cout << "Columnas" << endl;
            return false;
        }
    }


    i = 0;
    while(i <= ((rows*columns) - (rows - 1))){
        suma = 0;
        for(int k=0; k<rows; k++){
            suma += *(celda + i + k);
        }
        if(suma != sumaControl){
            cout << "Filas" << endl;
            return false;
        }
        i = i + rows;
    }

    return true;
}


void mostrarMatriz(int rows, int columns, int *celda){
    for(int r=0; r<rows; r++){
        for(int c=0; c<columns; c++){
            cout << *celda << endl;
            celda = celda + 1;
        }
        cout << endl;
    }
}

