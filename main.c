#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    printf("Enter a number for find even or odd number = ",i);
    scanf("%d",&i);
    if (i%2==0)
        printf("%d is even.",i);
    else
        printf("%d is odd.",i);

    return 0;
}
