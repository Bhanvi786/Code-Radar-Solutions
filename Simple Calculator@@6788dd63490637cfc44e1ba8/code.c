#include <stdio.h>
void main(){
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else{
        printf("Error");
    }
}