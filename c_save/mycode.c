#include <stdio.h>
#include <stdlib.h>


int main(){



    int *a;
    a = calloc(5, 4);


    for(int i=0;i < 5;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}