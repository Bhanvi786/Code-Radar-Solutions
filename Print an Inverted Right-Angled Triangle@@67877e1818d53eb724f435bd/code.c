#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    int b=1;
    while(a>=1)
    {
        while(b<=a)
        {
            printf("*");
            b=b+1;
        }
        printf("\n");
        b=1;
        a=a-1;
    }
}
