/*
 *              Informatica II
 * Grupo 4
 *Juan Sebastian Anaya Regino
 *CC: 1007545962
 *Ejercicio:
 * Figura 2: Elabore  el programa que produce la siguiente salida en la terminal:
 *
 *                                           A           A
 *                                           AB         BA
 *                                           ABC       CBA
 *                                           ABCD     DCBA
 *                                           ABCDE   EDCBA
 *                                           ABCDEF FEDCBA
 *                                           ABCDEFGFEDCBA
 *                                           ABCDEF FEDCBA
 *                                           ABCDE   EDCBA
 *                                           ABCD     DCBA
 *                                           ABC       CBA
 *                                           AB         BA
 *                                           A           A
 *
*/

#include <iostream>

using namespace std;

int main()
{
    int b, i, c, n, h;
    char letra, e;

    e=' ';
    letra= 'A';
    c=1;
    n=1;

    cout << "Este programa dependiendo del numero ingresado produce una figura como "
    "la que se muestra en pantalla(Ejemplo correspondiente al numero 7):\n"
                            "A           A\n"
                            "AB         BA\n"
                            "ABC       CBA\n"
                            "ABCD     DCBA\n"
                            "ABCDE   EDCBA\n"
                            "ABCDEF FEDCBA\n"
                            "ABCDEFGFEDCBA\n"
                            "ABCDEF FEDCBA\n"
                            "ABCDE   EDCBA\n"
                            "ABCD     DCBA\n"
                            "ABC       CBA\n"
                            "AB         BA\n"
                            "A           A\n"
    "Siendo el numero ingresado la cantidad de caracteres que estaran en el centro.\n\n";
    cout << "Ingrese un numero: ";
    cin >> b;
    for (i=0; i<b; i++ ){
        for (h=0; h<=i; h++){
            cout << letra;
            letra++;
        }
        while (c<(b*2)-2){
            cout << e;
            c++;
        }

        for (h=0 ; h<=i; h++){
            if (i==(b-1) and h==0){
                letra--;
            }
            if ( h==b-1){
                break;
            }
            letra--;
            cout << letra;
        }
        cout << endl;
        n+=2;
        c=n;
    }
    for (i=b-1; i>0; i--){
        letra='A';
        for(h=0; h<i; h++){
            cout << letra;
            letra++;
        }
        for(h=1; h<=(b-i)*2-1; h++){
            cout << e;
        }
        for(h=0; h<i; h++){
            letra--;
            cout << letra;
        }
        cout << endl;
    }

    return 0;
}
