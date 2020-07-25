#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void calculoPorcentaje (float precio, float porcentaje);
		int aux;
main(){
	
	do{
		//variables
		float precio,porcentaje;

		//desarrollo
		printf("Ingresa el precio");
		scanf("%f",&precio);
		printf("Ingresa el porcentaje");
		scanf("%f",&porcentaje);
		calculoPorcentaje(precio,porcentaje);
		printf("Desea hacer una nueva operacion? \n 1 = si \n 2 = no \n ");
		scanf("%d",&aux);		

	} while (aux == 1);
}


//Desarrollo de la funcion calculo de porcentaje

void calculoPorcentaje (float precio, float porcentaje){
	float resultado;
	resultado=(porcentaje*precio/100);
	printf("El %0.2f porciento de %0.2f Bs es: %0.2f \n ",porcentaje,precio,resultado);
}
