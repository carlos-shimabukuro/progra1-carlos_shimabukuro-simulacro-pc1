Algoritmo Ejercicio3
	//Datos de entrada
	escribir "Peso en Kg :"
	leer peso
	escribir "Altura en m :"
	leer altura
	
	// loogica
	imc <- (peso/(altura *altura))
	
	Si (imc < 15) 
		Entonces
		escribir "Criterio de ingreso en hospital"
	Fin Si
	Si (15 <= imc) y (imc <= 20)
		Entonces
		escribir "Bajo peso"
	Fin Si
	Si (20 < imc) y (imc <= 30)  
		Entonces
		escribir "Peso normal (saludable)"
	Fin Si
	Si (30 < imc) y (imc <= 40) 
		Entonces
		escribir "Sobrepeso obesidad de grado I)"
	Fin Si
	Si (40 < imc) 
		Entonces
		escribir "Sobrepeso cronico (obesidad de grado II)"
	Fin Si
FinAlgoritmo
