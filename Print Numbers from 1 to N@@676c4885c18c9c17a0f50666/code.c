#include <stdio.h>
int main(){
    int a;
    int i=1;
    scanf("%d",&a);
    while(i<=a){
        printf("%d\r",i);
        i+=1;
    }
    return 0;
}