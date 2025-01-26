#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=~(1<<b);
    printf("%d",a&c);
}   