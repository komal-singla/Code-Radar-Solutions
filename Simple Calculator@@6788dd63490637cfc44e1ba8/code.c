#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char c;
    scanf("%c",&c);
    switch(c){
        case '+':
        printf(a+b);
        break;
        case '-':
        printf(a-b);
        break;
        case '*':
        printf(a*b);
        break;
        case '/':
        printf(a/b);
        break;
    }

}