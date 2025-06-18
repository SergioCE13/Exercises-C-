#include <iostream>

using namespace std;

int main(){
	int numero = 1,impares = 0,multiplos = 0,negativos = 0;
	cout<<"Este programa lee números enteros hasta que el usuario introduzca 0 y determina la cantidad de numeros impares, multiplos de 3 y negativos ingresados..." <<endl;
	
	while(numero != 0){
		cout<<"Introduce un numero: ";
		cin>> numero;
		if (numero%2 != 0){
			impares++;
		}if(numero != 0 && numero%3 == 0){
			multiplos++;
		}if(numero < 0){
			negativos++;
		}
	};
	cout<<"Numeros impares: " << impares << " | Multiplos de 3: " << multiplos << " | Negativos: " << negativos << endl;
	
	return 0;
}
