#include <stdio.h>
int main(){
    printf("enter a number - ");
    int a;
    int i;
    scanf("%d",&a);
    int factorial = 1;
    for (i=1;i<=a;i++){
        factorial == factorial*i;   
    }
    printf("%d",factorial);
    }