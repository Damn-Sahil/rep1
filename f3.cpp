/*
* FILE			: f3.cpp
* PROJECT		: Focused3
* PROGRAMMER	: Khatri Sahil - Student(SET: C/C++ Programming)
* FIRST VERSION	: September 18th, 2023
* DESCRIPTION	: This program takes user input with the help of the provided function getNum() and determines whether the entered number
*				  is odd or even using the parameterised function isOdd(int), thus returning either 1 or 0 and displaying the needed 
*				  output.
*	int getNum(): This function is used to accept user input. It returns the value to the main() function
*	int isOdd(int): This function uses a ternary operator to check if the value passed in the parameters(in this case the user-input) is odd or not.
					It returns 1 if the number is odd and 0 if not. These values are returned to the main() function.
*/

#include<stdio.h>
int isOdd(int);													//declaration of functions isOdd() and getNum()
int getNum(void);
#pragma warning(disable: 4996) // required by Visual Studio
int main()
{
	int n,x;
	printf("Enter a non negative number\n");
	n = getNum();
	x = isOdd(n);
	if (x == 1)
		printf("%d is Odd\n", n);
	else
		printf("%d is Even\n", n);

}
int isOdd(int m)												//uses ternary operator to check if the remainder of the entered number when divided by 2 is 0 or not
{
	int z=m % 2 == 0 ? 0 : 1;									//if it is 0, the number is even, odd if not.
	return z;
}

int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}