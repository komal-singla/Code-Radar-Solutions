#include <stdio.h>
int main(){
    int a;
    int n=0;
    int i=1;
    scanf("%d",&a);
    do{
        n+=i;
        i++;
        printf("%d x %d = \n",a,n,n*i);
        
    }while(i<=10);
}