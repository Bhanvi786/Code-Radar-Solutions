#include <stdio.h>
void main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b==c){
    printf("EQUILATERAL");
}
else if(a==b || b==c ||c==a){
    printf("Isosceles");
}
else{
    printf("Scalene");
}
}