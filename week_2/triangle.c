#include <stdio.h>
#include <stdlib.h>
int main(){
    int raw;
    scanf("%d", &raw);
    int i = 1;
    for(; raw > 0; raw --){
        for(int a = 1; a <= raw; a++){
            printf(" ");
        }
        for(int b = 0; b < 2 * i - 1; b++){
            printf("*");
        }
        ++i;
        printf("\n");
    }
    return 0;
}