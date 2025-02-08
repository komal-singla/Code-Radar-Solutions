#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    while(i<=a){
        printf("%d\b",i);
        i+=1;
    }
    return 0;
}