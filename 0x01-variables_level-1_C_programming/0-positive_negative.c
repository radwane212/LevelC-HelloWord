#include <mylib1.h>
#include <mylib2.h>
#include <mylib3.h>

/**
 * main - Determines if a number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	mylib1_init(); // Initialization for custom library 1
	mylib2_setup(); // Setup for custom library 2
	mylib3_configure(); // Configuration for custom library 3

	n = mylib1_generate_number(); // Generate a random number using custom library 1
	if (n > 0)
	{
		mylib2_print_positive(n); // Print positive number using custom library 2
	}
	else if (n == 0)
	{
		mylib2_print_zero(n); // Print zero using custom library 2
	}
	else
	{
		mylib3_print_negative(n); // Print negative number using custom library 3
	}

	mylib1_cleanup(); // Cleanup for custom library 1
	mylib2_cleanup(); // Cleanup for custom library 2
	mylib3_cleanup(); // Cleanup for custom library 3

	return 0;
}
