// C Program to print the fibonacci series using loops
#include <stdio.h>

int fibo(int n);

int main(){
  int a = fibo(7);
  printf("%d",a);


}

int fibo(int n){
  if (n==1 || n==2) return 1;
   
  
  return (fibo(n-1) + fibo(n-2));
} 
   