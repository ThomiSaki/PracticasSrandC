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
	
	int i;
	int num = 0, num_3 = 0 , num_5 = 0, num3_5 = 0;
	
	srand(time(NULL));
	
	for (i = 0 ; i < 100 ; i++){
		num = (rand() % 500 + 1);
		if(num % 3 == 0){
		num_3++;
		}
		if (num % 5 == 0){
		num_5++;
		}
		if (num % 3 == 0 && num % 5 == 0){
		num3_5++;	
		}
	
}


	printf("Multiplo de 3 : %d\n", num_3);
	printf("Multiplo de 5 : %d\n", num_5);
	printf("Multiplo de 3 y 5: %d\n", num3_5);
	
	return 0;
}

