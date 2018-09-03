#include <stdio.h>
#include <stdlib.h>
int i1, i2;
int main(int argc, const char * argv[]) {
    int a, b, sum=0;
    scanf("%d", &a);
    printf("\n");
    int *Puertas= calloc(a, sizeof(int));
    for (i1=1; i1<=a; i1++){
        scanf("%d", &Puertas[i1]);
    }
    printf("\n");
    scanf("%d", &b);
    printf("\n");
    int *LLaves= calloc(b, sizeof(int));
    for (i1=0; i1<b; i1++){
        scanf("%d", &LLaves[i1]);
    }
    
    
    for (i1=0; i1<b; i1++){
        sum=0;
        for (i2=1; i2<=a; i2++){
            if (LLaves[i1]==Puertas[i2]){
                printf("%d ", i2);
                sum++;
            }
        }
        if (sum==0)
            printf("0 ");
    }
    return 0;
}
