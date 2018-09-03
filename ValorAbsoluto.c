//
//  main.c
//  prueba
//
//  Created by Usuario on 12/08/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void sumadedosnumerosabs(int a, int b, int *c);
int main(int argc, const char * argv[]) {
    int a, b, c;
    scanf("%d %d", &a, &b);
    sumadedosnumerosabs(a, b, &c);
    printf("%d", c);
    return 0;
}
void sumadedosnumerosabs(int a, int b, int *c){
    if (a+b>0)
        *c=a+b;
    else
        *c=(a+b)*-1;
}
