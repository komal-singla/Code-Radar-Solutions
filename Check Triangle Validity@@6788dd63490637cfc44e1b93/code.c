#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+<=c || b+c<=a || a+c<=b){
        printf("Invalid");
    }
    else{
        printf("Valid");
    }
}