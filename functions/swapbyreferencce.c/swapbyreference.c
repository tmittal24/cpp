#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;

}
int main(){
    int a = 10;
    int b = 20;
    int *a1=&a;
    int *a2=&b;
    swap(a1,a2);
    printf("%d %d", *a1, *a2);

}