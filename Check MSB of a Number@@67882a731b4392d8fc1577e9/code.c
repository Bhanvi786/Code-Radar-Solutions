#include <stdio.h>
void main(){
    int num;
    int a=1<<31;
    scanf("%d",&num);
    if(num & a)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}