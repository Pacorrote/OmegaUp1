#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float x;
    scanf("%f", &x);
    float y=(x+5)/(2*(x+1));
    float z=(pow(y, 2)+(x)*(x-2*y))/(x*y);
    printf("%f", z);
    return 0;
}
