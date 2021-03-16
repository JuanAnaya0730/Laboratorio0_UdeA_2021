/*
 *              Informatica II
 * Grupo 4
 *Juan Sebastian Anaya Regino
 *CC: 1007545962
 *Ejercicio 2: Escriba un algoritmo cuya entrada sea un número entero y muestra el resultado de la suma de
 * todos sus dígitos elevados a sí mismos.
 * Ejemplo: si el numero ingresado es 231 el resultado será 2^2+3^3+1^1=32, el programa
 * mostrara el número 32.
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i, c;

    cout << "Este programa recibe un numero y muestra en pantalla el resultado de "
    "la suma de todos sus digitos elevados a si mismos.\n"
    "Ejemplo: si el numero ingresado es 231 el resultado sera 2^2+3^3+1^1=32, el "
    "programa mostrara el numero 32.\n\n";

    cout << "Ingrese un numero: ";
    cin >> n;

    c=0;

    while(n>0){
        i=n%10;
        n=n/10;
        c+=pow(i, i);
    }

    cout << "El resultado es: " << c << endl;

    return 0;
}
