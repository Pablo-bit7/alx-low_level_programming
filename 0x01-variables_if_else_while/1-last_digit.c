#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char str[20];
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	sprintf(str, "%d", n);
	last_n = str[strlen(str) - 1] - '0';

	if (last_n > 5){
	printf("Last digit of %d is %d and is greater than 5", n, last_n);
	}

	if (last_n == 0){
	printf("Last digit of %d is %d and is 0", n, last_n);
	}

	if (last_n != 0 && last_n < 6){
	printf("Last digit of %d is %d and is less than 6 and not 0", n, last_n);
	}


	return (0);
}
