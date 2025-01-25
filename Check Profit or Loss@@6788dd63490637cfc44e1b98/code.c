#include <stdio.h>
void main(){
    int cp,sp;
    spanf("%d %d",&cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    else if(sp>cp){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
}