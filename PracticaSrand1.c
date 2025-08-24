/*
Hacer un programa que genere 100 números aleatorios entre 1 y 500, y muestre:
Cuántos son múltiplos de 3.
Cuántos son múltiplos de 5.
Cuántos son múltiplos de ambos (3 y 5)..
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	float num,prom,acum_num;
	int i;
	srand(time(NULL));
	
	for(i = 0 ; i < 2 ; i++){
		num = (rand() % 1000 + 1);
		printf("%.2f\n" , num);
		acum_num = acum_num + num;
	}
	prom = acum_num / 2;
	printf("El Prom Es %.2f" , prom);
	
	return 0;
}
