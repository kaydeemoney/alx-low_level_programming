#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

int last = strlen(n);

if (last > 0)
{
int lastChar = n[last - 1];

	(if lastChar > 5) {
		printf("Last digit of %d is %d and is greater than 5\n", n, lastChar); }


	(if lastChar == 0) {
		printf("Last digit of %d is 0 and is 0\n", n); }


	(if lastChar > 6 && (lastChar != 0)) {
		printf("Last digit of %d is %d and is less than 6 and not 0\n"); }}

	return (0);
}
