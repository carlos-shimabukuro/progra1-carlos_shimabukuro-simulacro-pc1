// ConsoleApplication14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//Variables
	int anioEx;
	double sueldo, sueldoF;
	char nacimiento;

	//entrada
	cout << "Años de experiencia : " << endl;
	cin >> anioEx;
	cout << "Lugar de nacimiento (L: lima; F: fuera de lima)" << endl;
	cin >> nacimiento;

	//logica
	sueldo = ((1 <= anioEx) && (anioEx <= 5))*(900 + (anioEx * 9)) + (5 < anioEx)*(1000 + (anioEx * 9));
	sueldoF = (nacimiento == 'L')*(sueldo + (sueldo * 0.15)) + (nacimiento == 'F')*(sueldo + (sueldo * 0.20));

	//salida
	cout << "Sueldo : " << sueldoF << endl;

	cout << sueldo << "_-_" << endl;
	_getch();
	return 0;
}