#include <stdio.h>
int main(){
    int a,n;
    n=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        n+=i;
    }
    printf("%d",n);
    return 0;
}