#define CRT_SECURE_NO_WANINGS
#define N 5
#include <stdio.h>


int main(){

    int i;
    int a[N];


    for (i = 0; i < N; i++){
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    puts("sum");

    int sum = 0;
    for(i = 0; i < N; i++){
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}