#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    int *a;
    int na;

    printf("요소수 : ");
    scanf("%d", &na);
    a = calloc(na, sizeof(int));


    if (a == NULL){

        puts("not conn memory");
    }else{

        printf("%d개의 정수를 입력하시요\n", na);

        for (i = 0; i < na; i++){
            printf("a[%d] = ", i);
            scanf("%d\n" ,&a[i]);

            
        }
        printf("아래와 같다.\n");
        for(i=0; i < na; i++)
            printf("a[%d] = %d\n", i, a[i]);

        free(a);
        
        
    }
    return 0;
}