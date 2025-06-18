#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int num1, num2, num3, temp;

    // Información para el usuario
    cout << "Este programa lee 3 números ENTEROS ingresados por el usuario y los ordena de menor a mayor.\n";

    // Ingreso de datos por parte del usuario
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;

    // Ordenamiento manual utilizando una variable auxiliar
    if (num1 > num2) {
        temp = num1; // NOTA: este proceso se puede sustituir por la función swap de C++.
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Imprimir los números ordenados
    cout << "Los números ya se encuentran ordenados: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}