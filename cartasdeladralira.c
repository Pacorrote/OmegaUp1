#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int N, i, sum=0;
    scanf("%d", &N);
    char NumCartas [N];
    scanf("%s", &NumCartas[0]);
    for (i=1; i<=N/2; i++){
        if (NumCartas[i]==NumCartas[i+1])
            sum+=1;
    }
    printf("%d", sum);
    return 0;
}
