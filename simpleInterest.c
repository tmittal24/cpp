/* Calculation of simple interest */
/* Author: gekay Date: 25/06/2016 */
#include <stdio.h>
int main()
{
    //program for simple interest
    int p, t;
  
    float r, si;
    p = 1000;
    t = 3;
    r = 8.5;
    /*     formula for simple interest     */
    si = p * t * r / 100;
    printf("%f\n", si);
    printf("%c\n", 's');
    printf("%d\n", 65);

    printf ( "%d %d %f %f", p, t, r, si ) ;
    return 0;
}