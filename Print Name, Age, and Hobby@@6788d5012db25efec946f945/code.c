#include <stdio.h>
int main(){
    char a[5];
    int b;
    char c[8];
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %a\n Age: %b\n Hobby: %c",a,b,c);
    return 0;
}