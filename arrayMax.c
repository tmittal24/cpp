#include <stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    int min=0,max=0,i;
    for (i=0;i<=sizeof(array)/sizeof(int)-1;i++){
        if (array[i]>array[i+1]){
            max == array[i]; 
        }
        else(min == array[i]);

    }
    printf("%d %d",max,min);


}