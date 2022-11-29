//Program to solve quadratic function
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float r1, r2;
    float re, im;
    float disc;

    printf("Enter values for a, b, c : ");
    scanf("%f%f%f", &a, &b, &c);

    disc = (b * b) - (4 * a* c);

    if (disc < 0)
    {
        printf("Imaginary roots\n");
        re = -b / (2 * a);
        im = pow (fabs (disc), 0.5) / (2 * a);
        printf("r1 = %.2lf + %.2lfi and r2 = %.2lf - %.2lfi", re, im, re, im);
    }
    else if (disc == 0)
    {
        printf("Real and equal roots\n");
        re = -b / (2 * a);
        printf("r1 and r2 are %.2lf", re);
    }
    else
    {
        printf("Real and distinct roots\n");
        printf("roots are: \n");
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("r1 = %.2lf and r2 = %.2lf\n", r1, r2);
    }

    printf("\n\nEnd of Program");

    return 0;
}
