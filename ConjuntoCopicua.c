#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int datos, i, con=0;
    scanf("%d", &datos);
    int guardar[datos];
    for (i=0; i<datos; i++){
        scanf("%d", &guardar[i]);
    }
    for (i=0; i<datos; i++){
        if (guardar[i]==guardar[datos-i-1])
            con+=1;
    }
    if(con==datos)
        printf("SI");
    else
        printf("NO");
    return 0;
}
