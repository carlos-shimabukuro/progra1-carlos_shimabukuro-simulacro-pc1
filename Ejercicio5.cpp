// ConsoleApplication12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//variables
	int sueldo;
	char tipoV, tarjetaC, cargaF;

	int puntoS, puntosTv, puntosTc, puntosCf, puntosF;

	char prestamoA, prestamoB;
	bool otorgaP, prestamoX, prestamoY;

	//entrada
	cout << "Sueldo mensual : " << endl;
	cin >> sueldo;
	cout << "Tipo de vivienda (P: pariente; A: alquilada; M: propia) : " << endl;
	cin >> tipoV;
	cout << "Tarjeta de credito (N: no tiene; S: si tiene) : " << endl;
	cin >> tarjetaC;
	cout << "Tiene carga familiar (N: no tiene; S: si tiene) : " << endl;
	cin >> cargaF;

	//logica
	puntoS = ((sueldo < 1500) * 6) + (((1500 <= sueldo) && (sueldo <= 6000)) * 12) + ((6000 < sueldo) * 18);
	puntosTv = ((tipoV == 'P') * 2) + ((tipoV == 'A') * 5) + ((tipoV == 'M') * 10);
	puntosTc = ((tarjetaC == 'N') * 0) + ((tarjetaC == 'S') * 6);
	puntosCf = ((cargaF == 'S') * 6) + ((cargaF == 'N') * 3);
	puntosF = puntoS + puntosTv + puntosTc + puntosCf;

	otorgaP = (puntosF > 20);
	prestamoX = otorgaP;
	prestamoY = !otorgaP;
	prestamoA = prestamoX * 'S';
	prestamoB = prestamoY * 'N';

	//salida
	cout << "Puntaje Obtenido : " << puntosF << endl;
	cout << "Se le otorga el prestamos (N : no; S: si) : " << prestamoA << prestamoB << endl;

	_getch();
	return 0;
}
