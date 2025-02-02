#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a.lower()){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
}