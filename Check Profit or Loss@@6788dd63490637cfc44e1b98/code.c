#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if((a-b)>0){
        printf("Loss");
    }
    else if((a-b)<0){
        printf("Profit");
    }
    else{
        printf("no profit/no loss");
    }
}