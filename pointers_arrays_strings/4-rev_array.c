#include "main.h"
/**
 *reverse_array - entry
 *description: 'reverse the array'
 *@a: array input
 *@n: array output
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int r = n - 1;
	int temp;

	while (i <= r)
	{
		temp = a[i];
		a[i] = a[r];
		a[r] = temp;
		r--;
		i++;
		}
}
