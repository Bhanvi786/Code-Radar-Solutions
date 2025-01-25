#include <stdio.h>
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b==c){
    printf("Equilateral")
}
else if(a==b || b==c ||c==a){
    printf("Isoceless");
}
else{
    printf("Scalene")
}