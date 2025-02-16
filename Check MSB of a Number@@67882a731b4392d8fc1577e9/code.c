#include <stdio.h>
void main(){
    int num;
    int a=1<<31;
    if(num & a)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}