#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);
    avg=(a+b+c)/3;
    prinf("Average: %.2f",avg);
    return 0;
}