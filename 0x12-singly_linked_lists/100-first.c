#include <stdio.h>

/* This function will be executed before main */
void __attribute__((constructor)) before_main(void)
{
	/* Print a message before main function is executed */
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back\n");
}
