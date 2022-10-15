#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
* designing a simple calculator
* to allow users input
*/

int main()
{
    /**
    * first thing is to declare a variable without initialising
    * name the variable c and d
    */

    /*store operator in the char variable*/
    /* using nested loop for repeating the process*/
    for (int j = 0; j <= 5; j++)
    {
    char o;
    double result;
    /*recalling the variable in the header file*/

    double a;
    /*using loop to put it on a straight line*/

    printf(" ");
    scanf("%lf", &a);

    printf(" ");

    printf(" ");
    scanf(" %s", &o);

    printf(" ");

    double b;
    printf(" ");
    scanf("%lf", &b);
    printf(" ");

    /*using the if statement to call the operator*/

    if (o=='+'){
        double result = sum(a, b);
        printf("Answer = %lf", result);


    }
    else if (o=='-')
    {
        double result = subt(a, b);
        printf("Answer = %lf", result);
    }

    else if (o=='/')
    {
        double result = divide(a, b);
        printf("Answer = %lf", result);
    }
    else if (o=='*')
    {
        double result = multiply(a, b);
        printf("Answer = %lf", result);
    }

    /* to find the percentage of number*/

    else
    {

        printf("Syntax error");
    }

        printf(" ");
    }
    return 0;

}

