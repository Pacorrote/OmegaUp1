#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <math.h>
 int main(int argc, const char * argv[]) {
     char *frase=malloc(100*sizeof(char));
     int i, a, b;
     scanf("%d %d", &a , &b);
     fflush(stdin);
     scanf(" %[^\n]", frase);
     for (i = b; i>=a;i--) {
         printf("%c", frase[i]);
     }
     for (i=b+1; i<=strlen(frase); i++){
         printf("%c", frase[i]);
     }
 return 0;
 }
