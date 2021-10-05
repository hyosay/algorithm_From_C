#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n);

int main(void)
{
    int a = sizeof(int);
    printf("%d", a);

    int i;
    int *height;
    int number;

    printf("member cnt : ");
    scanf("%d", &number);
    height = calloc(number, sizeof(int));

    printf("%d  사람의 키를 입력하세요. \n", number);
    for (i = 0; i < number; i++)
    {
        printf("height[%d] :", i);
        scanf("%d", &height[i]);
    }
    printf("max height : %d", maxof(height, number));

    free(height);
    return 0;
}
int maxof(const int a[], int n)
{
    int i;
    int max = a[0];

    for (i = 1; i < n; i++){

        if (a[i] > max)
        max = a[i];

    }
return max;
}

