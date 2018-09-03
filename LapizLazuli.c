#include <stdio.h>
#include <math.h>

int Prueba(int a, int b, int c, int x, int y, int z);
int main(int argc, const char * argv[]) {
    int A, B, C, X, Y, Z;
    scanf("%d %d %d %d %d %d", &A, &B, &C, &X, &Y, &Z);
    printf("%d", Prueba(A, B, C, X, Y, Z));
    return 0;
}

int Prueba(int a, int b, int c, int x, int y, int z){
    int DimensionCofre=x*y*z;
    int Tablilla=a*b*c;
    if (DimensionCofre>Tablilla)
        return 1;
    else
        return 0;
}
