#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5
	
int main(){
	int f,c;
	double mt[N][M];
	double *ptr;
	ptr = &mt[0][0]; //el nombre de matriz(arreglo) es igual a un ptr que apunta a la primer direccion de memoria

	
	int i =0;
	for(f = 0; f<N; f++)
	{
		for(c = 0; c<M; c++){
			i++;
			mt[f][c] = i;
			//printf("%lf ", mt[f][c]);
		}
		printf("\n");	
	}
	/*printf("\n");	
	printf("\n");	
	printf("\n");*/	
	

	for(f = 0; f<N; f++)
	{
		for(c = 0; c<M; c++){
			printf("%lf\n",*ptr);
			//printf("%lf ", mt[f][c]);
			ptr++;
		}
		printf("\n");
		
	}
	return 0;
}
