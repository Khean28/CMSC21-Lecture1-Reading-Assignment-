#include <stdio.h>

int main (void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter first fraction: "); /*** allows user to type***/
	scanf("%d/%d", &num1, &denom1); /***scanf allows us to read the entire fraction***/

	printf("Enter second fraction: "); /*** allows user to type***/
	scanf("%d/%d", &num2, &denom2); /***scanf allows us to read the entire fraction***/

	result_num = num1 * denom2 + num2 * denom1; /*** for computation of the fraction***/
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom); /*** printing the final answer, not in lowest form***/

	return 0;
}