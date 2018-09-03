#include <stdio.h>
#include <math.h>
int Promedio (int p1, int p2, int p3);
int main(int argc, const char * argv[]) {
    int c1, c2, c3;
    scanf("%i %i %i", &c1, &c2, &c3);
    if (Promedio(c1, c2, c3)>=6)
        printf("1\n\n");
    else{
        printf("0\n\n");
    }
    return 0;
}

int Promedio (int p1, int p2, int p3){
    int sum=p1+p2+p3;
    int promedio=sum/3;
    return promedio;
}
