#include <stdio.h>
int main(){
    int a;
    int n=0;
    int i=0;
    scanf("%d",&a);
    do{
        n+=i;
        // i++;
        printf("%d x %d = %d\n",a,n,n*i);
        // i++;
    }while(i<=10);
    // printf("%d x %d = n*i\n",a,n);
    return 0;
}