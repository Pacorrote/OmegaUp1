#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int datos, i, numero;
    scanf("%d", &datos);
    int guardar[datos];
    for (i=0; i<datos; i++){
        scanf("%d", &numero);
        guardar[i]=numero;
    }
    for (i=0; i<datos; i++){
       if (guardar[i]%3==0 && guardar[i]%5==0)
           printf("FizzBozz\n");
        else if (guardar[i]%5==0)
            printf("Bozz\n");
        else if (guardar[i]%3==0)
            printf("Fizz\n");
        else if (guardar[i]%3!=0 && guardar[i]%5!=0)
            printf("NoFizzBozz\n");
    }
    return 0;
}
