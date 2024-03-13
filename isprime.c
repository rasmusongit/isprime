#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int input;
	if(argc > 1)
	{
		input=atoi(argv[1]);
	}
	else
	{
		printf("You must supply an input integer so we can evaluate if it is a prime. Exiting.\n");
		return 1;
	}
	printf("Based off of the prevalence of primes in general, %d is likely not prime\n",input);
	return 0;
}
