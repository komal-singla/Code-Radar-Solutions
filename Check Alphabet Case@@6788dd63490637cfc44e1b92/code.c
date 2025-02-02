#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(islower(a)){
        printf("Lowercase");
    }
    else if(isupper(a)){
        printf("Uppercase");
    }
    return 0;
}