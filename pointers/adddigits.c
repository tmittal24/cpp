#include<stdio.h>

int main(){
    
  int arr[40]={1,2,3,4,5,6,7,8,9};
  int mid = 9/2;
    int n =7;
    if (n=arr[mid]){
        printf("%d",arr[mid]);

    }
    else if(n<arr[mid]){
        for(int i =0;i<mid;i++){
            if(arr[i]==n){
                printf ("%d",i);
            }
        }
    }

    else if(n>arr[mid]){
        for(int i =mid;i<9;i++){
            if(arr[i]==n){
                printf ("%d",i);
            }
        }
    }


  
}