/**************************************************
* PROGRAMA : Laboratorio 02 - Pregunta 01
* OBJETIVO : Impletar el uso de punteros y matrices
* Fecha creacion : 30 / 03 / 2017
* GRUPO : 
			Alex Ceverino Chuquiano
			Waldo Peyrau Morales
			Cristian Rojas Saavedra
			
* ASIGNATURA : Estructura de Datos 
* SECCION : 651
* FECHA DE ULTIMA ACTUALIZACION : 31 / 03 / 2017
***************************************************/

#include <stdio.h>
#include <math.h>
// declaracion de la estructura
typedef struct complex{
	int r;
	int i;	
}Complex;

// funcion Re que retorna la parte entera del número complejo
int Re(Complex z){
	int a = z.r;
	return a;
}
// funcion Im que retorna la parte imaginaria del número complejo	
int Im(Complex z){
	int b = z.i;
	return b;
}
// Funcion que entrega el valor absoluto del número complejo
float valor_absoluto(Complex x){
	int real = Re(x)*Re(x);
	int imag = Im(x)*Im(x);
	int aux = real + imag;
	float z;
	z = sqrt( aux );
	
	return z;
}
//procedimiento que imprime el conjugado del número complejo
void conjugado(Complex z){
	
	printf("conjugado de x: %d + %di",Re(z),Im(z));

}	


int main(){
	//se inicializa la variable de tipo Complex
	Complex x;
	x.r = 10;
	x.i = 5 ;
		
	int aux ;
	//se asigna a una variable el valor de la parte entera del número complejo
	aux = Re(x);
	printf("parte real de x: %d\n",aux);
	//se asigna a una variable el valor de la parte imaginaria del número complejo
	aux = Im(x);
	printf("parte imaginaria de x: %d\n",aux);
	//se asigna a la variable el valor absoluto del número complejo
	aux = valor_absoluto(x);
	printf("valor absoluto de x: %d",aux);
	// se invoca la funcion conjugado (void)
	conjugado(x);
	
	return (0);
}

