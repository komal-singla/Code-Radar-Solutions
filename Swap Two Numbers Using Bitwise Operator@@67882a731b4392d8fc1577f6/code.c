#include <stdio.h>
int main(){
    int a,b,r;
    scanf("%d",&a);
    scanf("%d",&b);
    r=a;
    a=b;
    b=r;
    printf("%d %d",a,b);

}