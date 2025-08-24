/*
Generar números aleatorios entre 1 y 10 (o el rango que quieras).
Continuar generando hasta que aparezca un número clave (por ejemplo 7).
Contar cuántas veces apareció un número específico (por ejemplo 3).
Mostrar los resultados al final.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, num, cont_2 = 0;
	
	srand(time(NULL));
	
	for(i = 0 ; i < 50 ; i++){
		num = rand() % 10 + 1;
		printf("%d\n" , num);
		if (num == 7 ){
			return 0;
		} 
		if (num == 2){
			cont_2++;
			printf("Cantidad de 2 : %d \n", cont_2);
		}			
	}	
	return 0;
}

