#include<stdio.h>
int swap();
int main() {

    int a=10;
    int b=20;
    int c;

    c=a;
    a=b;
    b=c;
    //printf("a=%d\n",a);
    //printf("b=%d\n",b);
    swap();
}

int swap(){
    int a=22;
    int b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    b=a+b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);


}

