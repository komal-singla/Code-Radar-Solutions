#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char c;
    scanf("%c",&c);
    switch(c){
        case '+':
        printf("%d",a+b,a,b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
    }

}