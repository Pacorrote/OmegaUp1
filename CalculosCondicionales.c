#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int N, count1=0;
    scanf("%d", &N);
    if (N%2==0){
        N=N/2;
        printf("%d ", N);
        count1++;
    }
    else{
        N=N+1;
        printf("%d " , N);
        count1++;
    }
    if (N/100>=1){
        N=N/100;
        printf("%d ", N);
        count1++;
    }
    else if(N/10>=1 && N/10<10){
        N=N/10;
        printf("%d ", N);
        count1++;
    }
    else if (N%3==0){
        N=N-1;
        printf("%d ", N);
        count1++;
    }
    printf("%d", count1);
    return 0;
}
