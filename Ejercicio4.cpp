// ConsoleApplication9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	//Variables
	string cadena;
	string diaV, mesV, anioV, codigoAscii;
	char tipoProduct;
	bool perecible;

	//Datos de entrada
	cout << "Codigo de Barra : " << endl;
	getline(cin, cadena);

	diaV = cadena.substr(0, 2);
	mesV = cadena.substr(2, 2);
	anioV = cadena.substr(4, 4);
	codigoAscii = cadena.substr(8, 2);
	perecible = cadena.substr(10, 2) == "00";

	tipoProduct = char(stoi(codigoAscii));

	//Datos de salida

	cout << " Fecha de Vencimiento : " << diaV << " - " << mesV << " - " << anioV << endl;
	cout << " Tipo de producto : " << tipoProduct << endl;
	cout << " Perecible : " << perecible;

	_getch();
	return 0;
}
