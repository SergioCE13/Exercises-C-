#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252);  // Configura la salida de la consola para las tildes.

	int tiempo = 0;
	double bonificacion = 0, sueldo = 0;
	cout<<"Porfavor, ingresa tus años de antigüedad en la empresa: " <<endl;
	cin>>tiempo;
	cout<<"A continuación ingresa tu salario mensual: " << endl;
	cin>>sueldo;
	
	if (tiempo < 5) {
	    bonificacion = 0.05;
	} else if (tiempo < 10) {
	    bonificacion = 0.10;
	} else if (tiempo < 15) {
	    bonificacion = 0.15;
	} else if (tiempo < 20) {
	    bonificacion = 0.20;
	} else if (tiempo < 25) {
	    bonificacion = 0.25;
	} else if (tiempo < 30) {
	    bonificacion = 0.35;
	} else {
	    bonificacion = 0.50;
	}
	
	sueldo = sueldo + (sueldo * bonificacion);
	cout<<"la bonificación que vas a recibir es de: " << bonificacion*100 << "%" <<endl;
	cout<<"Tu salario ya con la bonificación es de: $" << sueldo <<endl;
	
	return 0;
}
