#include <stdio.h>
void main(){
    int a,b;
    scanf("%d",&a);
    b=1<<31;
    if(a & b){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}