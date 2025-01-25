#include <stdio.h>
void main(){
    char a;
    scanf("%c",&a);
    if(isalpha(a)){
        if(isupper(a)){
            printf("Uppercase");
        }
    }
    else{
        printf("Lowercase");
    }
}