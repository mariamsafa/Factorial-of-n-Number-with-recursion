#include<stdio.h>
int factorial(int number)
{
	if (number <= 1)
	{
		return 1;
	}
	else
	{
		return number * factorial(number - 1);
	}
}
int main()
{
	int n;
	printf("Enter a positive number : ");
	scanf_s("%d", &n);
	printf("Factorial of %d! is %d", n, factorial(n));
}