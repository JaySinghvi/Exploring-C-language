// Program to calculate SI and CI

#include <stdio.h>
#include <math.h>

 int main()
 {
     float si, ci, p, t, r;

     printf("Enter principal amount:\t");
     scanf("%f", &p);

     printf("Enter time in months:\t");
     scanf("%f", &t);

     printf("Enter rate in percentage:\t");
     scanf("%f", &r);

     si = p * r * t;
     printf(" Simple interest is %f\n", si);

     ci = p* (pow((1 + r/100),t));
     printf(" The compound interest is %f", ci);

 }

