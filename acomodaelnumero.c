#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int datos, i, i1, j;
    scanf("%d", &datos);
    int vector[datos];
    int auxiliar[1];
    int auxiliar2[1];
    for (i=0; i<datos; i++){
        scanf("%d", &vector[i]);
        if (i==0)
            auxiliar[1]=vector[i];
    }
    for (i=0; i<datos; i++){
        for (j=i+1; j<datos; j++){
            if (vector[i]>vector[j]){
                auxiliar2[1]=vector[j];
                vector[j]=vector[i];
                vector[i]=auxiliar2[1];
            }
        }
        if (vector[i]==auxiliar[1])
            i1=i;
    }
    printf("%d", i1);
return 0;
}
