#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int dato, i, j, pdb;
    scanf("%d", &dato);
    pdb=dato;
    for(i=1; i<=(dato*2)-1; i++){
        if (i<=dato){
        for (j=1; j<=i; j++){
            printf("%d", i);
        }
            printf("\n");
    }
        else {
            for (j=1; j<=pdb-1; j++){
                printf("%d", pdb-1);
            }
            printf("\n");
            pdb-=1;
        }
    }
    return 0;
}
