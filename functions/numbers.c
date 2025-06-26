#include<stdio.h>

int main(){
    int a=123,rem,rev=0,x;
    while(a!=0){
        rem=a%10;
        a=a/10;
        rev=rev*10+rem;
    }
    printf("%d",rem);
}