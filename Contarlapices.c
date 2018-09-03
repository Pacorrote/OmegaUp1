#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int datos, num, i, dato, contador=0;
    scanf("%d", &datos);
    scanf("%d", &num);
    for (i=0; i<datos; i++){
        scanf("%d", &dato);
        if (dato==num)
            contador++;
    }
    printf("%d", contador);
    return 0;
}
