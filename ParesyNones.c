#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int N, i, num, sump=0, sumi=0, cont1=0, cont2=0, prom1, prom2;
    scanf("%d", &N);
    for (i=1; i<=N; i++){
        scanf("%d", &num);
        if (num%2==0){
            sump+=num;
            cont1=cont1+1;
        }
        else{
            sumi+=num;
            cont2=cont2+1;
        }
    }
    prom1=sump/cont1;
    prom2=sumi/cont2;
    if (prom1>prom2)
        printf("APARICIO");
    else if (prom2>prom1)
        printf("NONILA");
    else
        printf("EMPATE!");
    return 0;
}
