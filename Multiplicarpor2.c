#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int primernumero;
    int segundonumero;
    scanf("%d %d", &primernumero, &segundonumero);
    if (primernumero*2==segundonumero || segundonumero*2==primernumero)
        printf("felizmil");
    else
        printf("tristemil");
    return 0;
}
