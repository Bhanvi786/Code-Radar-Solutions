#include <stdio.h>
void main(){
    int a,b;
    scanf("%d",&a);
    b=a & 1;
    if(b==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}