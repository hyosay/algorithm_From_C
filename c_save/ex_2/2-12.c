#include <stdio.h>

int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year)
{
    return year % 4 == 0 && year % 100 || year % 400 == 0;
}

int dayofyear(int y, int m, int d)
{
    int i;
    int days = d;
    for(i = 1; i < m; i++)
        days += mdays[isleap(y)][i - 1];
    return days; 
}

int main(void){

    int year, month, day;
    int retry;
    do{
        printf("years: "); scanf("%d", &year);
        printf("month: "); scanf("%d", &month);
        printf("day: "); scanf("%d", &day);
        printf("%d년의 %d일째입니다.", year, dayofyear(year, month, day));
        printf("return 1: yes/ 2: no : ");
        scanf("%d", &retry);
    }while(retry==1);
    return 0;
}