#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define T 1
#define F 0
int numerosPrimos[25]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void NumeroPrimo(long long a, int *b);
int main(int argc, const char * argv[]) {
	int entradas, P=0, j;
	long long i;
	scanf("%d", &entradas);
	for(j=1; j<=entradas; j++){
		scanf("%lld", &i);
		NumeroPrimo(i, &P);
		if (P==T)
			printf("UltraPrimo\n");
		else if (P==F)
			printf("No UltraPrimo\n");
	}
	return 0;
}
void NumeroPrimo(long long a, int *b){
	long long acumulador=0;
	int digitosum=0;
	if (a>1 && a<=97){
		for (int i=0; i<25; i++){
			if (a==numerosPrimos[i])
				acumulador++;
		}
		if (acumulador==1)
			*b=T;
		else
			*b=F;
	}
	else{
		while(a>=1){
			digitosum=a%10+digitosum;
			a/=10;
		}
		for (int i=0; i<25; i++){
			if (digitosum==numerosPrimos[i])
				acumulador++;
		}
		if (acumulador==1)
			*b=T;
		else
			*b=F;
	}
	}
