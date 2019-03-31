#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILA 15 

int main()
{
		int f,c;
		int columna;
		srand(time(NULL));
		columna = rand()%10 +6;
		printf("columnas  %d \n\n",columna);
		int mt[FILA][columna];
		int cont;
		int *vectorDin =(int*)malloc(sizeof(int)*15);
		
		for(f = 0; f < FILA; f++)		//filas
		{
			cont = 0;
			printf("\n**Fila %d ", f + 1);
			//printf("%d\n", mt[f][c]);
			for(c = 0;c < columna; c++)		//columnas
			{
				mt[f][c] = rand()%899 +101;
				printf("%d ", mt[f][c]);
				
				if(mt[f][c] % 2 == 0)
				{
					cont++;
				}	
			}
			vectorDin[f] = cont;
		}
		
		
		
		
	for(int i =0; i < 15; i++){
		printf("\nFila %d: pares %d",i+1 ,vectorDin[i]);
		}
	return 0;
}
