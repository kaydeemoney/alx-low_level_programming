#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this function generates random pwrrdword
 * Return:0
 */

int main(void)
{
	int pwrrd[100];
	int n, k, sumation;

	sumation = 0;
	srand(time(0));
	
	for (k = 0; k < 100; k++)
	{
		pwrrd[k] = rand() % 78;
		sumation += (pwrrd[k] + '0');
		putchar(pwrrd[k] + '0');
		
		if ((2772 - sumation) - '0' < 78)
		{
			n = 2772 - sumation - '0';
			sumation += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
