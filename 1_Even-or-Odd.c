/**
 * main - Entry point of the function
 * Authur: www.youtube.com/@syntax-solutions
 * Return: Always 0
*/

/* Include necessary libraries and create the main function */
#include <stdio.h>

int main(void)
{

/* Declare a variable 'num'to store the user input */

int num;

/* Prompt the user to input an intger and store it in the variable 'num' */

printf("Enter an integer: ");
scanf("%d", &num);

    /*
     * Use if-else statement
     * and determine if a number can be divided by 2 without a remainder or not
     * and print the result(Even or odd)
     */

if (num % 2 == 0)
{
printf("%d is even.\n", num);
}

else
{
printf("%d is odd.\n", num);
}

/* End the program */

return (0);
}
