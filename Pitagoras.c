#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int a, b, i, j, k, c=0;
    scanf("%d %d", &a, &b);
    for(i=a;i<=b;i++)
        for(j=a;j<=b;j++)
            for(k=a;k<=b;k++)
                if(i*i==j*j+k*k){
                    c+=1;
                }
    printf("%d", c/2);
    return 0;
}
