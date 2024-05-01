/* Calculation of simple interest */
/* Author gekay Date 25/06/2016 */
#include <stdio.h>
int main()
{
    int p, t;
    float r, si;
    printf("Enter values of p, n, r");

    /* Below '&' is an ‘Address of’ operator. 
    * It gives the location number (address) used by the variable in memory. 
    * When we say &a, we are telling scanf( ) at which memory location should it store the value supplied by the user
    */
    scanf("%d %d %f", &p, &t, &r);
    si = p * t * r / 100;
    printf("%f\n", si);
    return 0;
}