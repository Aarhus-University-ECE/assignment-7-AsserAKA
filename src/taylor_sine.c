#include "taylor_sine.h"
#include <math.h>
#include <assert.h>
#include <stdio.h>

/* implement your function here */
double taylor_sine(double x, int n)
{
    assert(n > 0); /* Precondition: number of terms must be larger than zero */

    double result = 0; /* Result of the Taylor function */
    int sign = -1; /* Value switching + and - sign after each term */
    double fact = 1; /* Factorial variable */
    int power = 1; /* Power variable */


    /* Loop calculating Taylor function: */
    for(int i = 0; i < n; i++)
    {
        sign = -sign; /* Switching sign between + and minus */

        result = result + (sign * (pow(x, power)/fact)); /* Calculating result for each term */

        fact = fact * (power + 1) * (power + 2); /* Calculating the factorial in the denominator */
        power = power + 2; /* Calculating the power of x */
    }

    return result;
}
