#include <iostream>

using namespace std;

int main(){
	//Declaramos las variables que vamos a utilizar
	int inferior, superior, numero, sumatoria = 0, numFuera = 0;
	bool numIntervalo = false;
	//Esablecemos un ciclo para verificar que el intervalo sea válido
	do{	
		cout<<"Introduce el primer numero del intervalo: ";
		cin>> inferior;
		cout<<"Introduce el segundo numero del intevalo: ";
		cin>> superior;
		if(inferior >= superior){
			cout<<"El primer numero debe ser menor al segundo" <<endl;
		}
	}while(inferior >= superior);
	
	//Instruimos al usuario a comenzar a introducir numeros.
	cout<<"A continuación comienza a ingresar los numeros a evaluar, el programa se detendrá si introduces 0" <<endl;
	
	//Generamos el ciclo para la lectura de numeros y las operaciones correspondientes.
	for(int i = 0; i<=100; i++){
		cout<<"Ingresa un numero: ";
		cin>>numero;
		//Verificamos si el numero introducido es 0 para romper el ciclo de lectura.
		if(numero == 0){
			break;
		}
		sumatoria = sumatoria + numero;
		//Verificamos si el múmero esta afuera del intervalo.
		if(numero < inferior || numero > superior){
			numFuera++;
		}
		//Verificamos si el número es igual a alguno de los limites del intervalo.
		if(numero == inferior || numero == superior){
			numIntervalo = true;
		}
	}
	
	//Imprimimos la información del resultado en pantalla.
	cout<<"La sumatoria de los numeros es: "<< sumatoria << " | Numeros fuera del intervalo: " <<numFuera <<endl;
	if(numIntervalo == true){
		cout<<"Al menos uno de los numeros pertenece a uno de los limites del intervalo";
	}else{
		cout<<"Ningún numero conincidió con los limites del intervalo";
	}
	
	return 0;
}
