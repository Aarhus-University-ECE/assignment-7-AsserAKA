#include "taylor_sine.c"
#include "stack.c"
#include <stdio.h>
#include <math.h>
#include <assert.h>


int main()
{
    // Add your test cases for Exercise 1b,c) here
    /* Test variables for x */
    double t1 = 1;
    double t2 = 2;
    double t3 = 5;
    double t4 = 25;
    double t5 = 50;
    
    /* Test size of Taylor series terms */
    int n = 50;

    /* Testing the function */
    printf("Result from Taylor sine function:\n");
    printf("%f\n", taylor_sine(t1, n));
    printf("%f\n", taylor_sine(t2, n));
    printf("%f\n", taylor_sine(t3, n));
    printf("%f\n", taylor_sine(t4, n));
    printf("%f\n\n", taylor_sine(t5, n));

    printf("Result form ANSI C since function:\n");
    printf("%f\n", sin(t1)); /* The result from the Taylor series function matches the sine function */
    printf("%f\n", sin(t2)); /* The result from the Taylor series function matches the sine function */
    printf("%f\n", sin(t3)); /* The result from the Taylor series function matches the sine function */
    printf("%f\n", sin(t4)); /* The result from the Taylor series function matches the sine function */
    printf("%f\n", sin(t5)); /* The result from the Taylor series does not match the sine funtion*/

    /* In the interval where x was 1 to around 30, it gave a precise result. As the x-value gets larger,
    the amount of terms has to get larger too, if you want a precise reslut. If x gets much larger than 30,
    the programme begins to fail. */



    /* Exercise 2 b */
    /* A) Testing initialize function */
    stack s;
    
    initialize(&s);
    assert(s.head == NULL);

    /* B) Testing push and pop */
    int x = 4;
    push(x, &s);
    
    int y = pop(&s);
    assert(y == x);
    printf("\nx is %d and y is %d\n", x, y);

    /* C) Testing push and pop with two values */
    int x0 = 2;
    int x1 = 8;

    push(x0, &s);
    push(x1, &s);

    int y0 = pop(&s);
    int y1 = pop(&s);

    assert(x0 == y1 && x1 == y0);
    printf("x0 is %d and y1 is %d\nx1 is %d and y0 is %d ", x0, y1, x1, y0);

    return 0;
}