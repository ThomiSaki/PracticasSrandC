/*
Simular el lanzamiento de una moneda para diferentes cantidades de intentos: 1, 10, 100, 1000 y 10000.
Contar cuántas veces salió cara y cuántas seca (o cruz).
Mostrar los resultados y el porcentaje de cada resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i ; 
	float num ,cara = 0.0, cruz = 0.0,porcentaje_cara = 0.0, porcentaje_cruz = 0.0,ttl = 0.0;
	 
	srand(time(NULL));
	
	for(i = 0 ; i < 10000 ; i++){
		num = rand() % 2;
		
		if (num == 0){
			cara++;
		} else{
			cruz++;
		}
}
		ttl = cara + cruz;
		porcentaje_cara = (cara * 100.0) / ttl;	
		porcentaje_cruz = (cruz * 100.0) / ttl;	
	
		printf("Cara = %.2f\n", cara);
		printf("Cruz = %.2f\n", cruz);
		printf("Porcentaje Acurrency cara %.2f\n" , porcentaje_cara);
		printf("Porcentaje Acurrency cruz %.2f\n" , porcentaje_cruz);
		
		return 0;
}

