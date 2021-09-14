#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *x;
    // c++
    
    // x = (int *)calloc(1, sizeof(int));
    
    
    x = calloc(1, sizeof(int));
    // c++ 에서 오류남

    if (x  == NULL){
        puts("not connet memory");
    } else{


        *x = 57;

        printf("%d\n", *x);
        printf("%d\n", x);
        printf("%d\n", &x);


        // free(*x) x
        free(x); // o
    }
    return 0;


}