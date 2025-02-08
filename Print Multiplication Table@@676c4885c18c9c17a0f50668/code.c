#include <stdio.h>
int main(){
    int n;
    int i=1;
    scanf("%d",&n);
    do{
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }while(i<=10);
    // printf("%d x %d = n*i\n",a,n);
    return 0;
}