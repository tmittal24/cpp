#include<stdio.h>
int func(int a[5]);
    

int main(){
    int arr[]={1,2,3,4,5};
    int *a;
    a=func(arr);
    printf("%d",a);
}

int func(int a[5]){
    int sum =0,i=0;
    for(i=0;i<5;i++)
    sum=sum+*(a+i);
    
    return sum;
    }




