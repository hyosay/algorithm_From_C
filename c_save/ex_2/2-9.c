#include <stdio.h>

int main(void)
{

    int i, n;
    unsigned long counter = 0;
    for(n = 2; n <= 10; n++){
        for(i = 2; i < n; i++){
            counter++;
            if(n % i == 0)
            break;
        }
        
        if(n == i)
        printf("%d\n", n);
    }
    printf("%lu\n", counter);

return 0;
}