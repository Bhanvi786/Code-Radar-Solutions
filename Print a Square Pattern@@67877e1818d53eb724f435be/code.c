#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a=1;
    while(a<=n)
    {
        int b=1;
        while(b<=n)
        {
            printf("* ");
            b=b+1;
        }
        printf("\n");
        a=a+1;
    }
}