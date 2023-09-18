#include <stdio.h>
#include "head.h"
int main() {
    int num;
    printf("daj cislo: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("sude");
    }
    else{
        printf("liche");
    }
    return 0;
}
