#include <stdio.h>
void main()
{
    int a=1;
    int b=1;
    int c;
    scanf("%d",&c);
    while(a<=c)
    {
        while(b<=c)
        {
            printf("* ");
            b=b+1;
        }
    printf("\n");
    b=1;
    a=a+1;
    }
}