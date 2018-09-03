#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int p, s, r, count=0;
    scanf("%d %d %d", &p, &s, &r);
    while(p>=0){
        p-=(s-r);
        count++;
    }
    printf("%d", count-1);
    return 0;
}
