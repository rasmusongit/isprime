#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int notprime(int d)
{
	printf("%d is not prime\n",d);
	return 0;
}
int yesprime(int d)
{
	printf("%d is a prime!\n",d);
	return 0;
}
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
	if(input<2)
	{
		notprime(input);
		return 0;
	}
	if(input==2)
	{
		yesprime(input);
		return 0;
	}
	if(input%2==0)
	{
		notprime(input);
		return 0;
	}
	for(int i=3; i< pow((float) input,0.5); i++)
	{
		if(input%i==0)
		{
			notprime(input);
			return 0;
		}
	}
	yesprime(input);
	return 0;
}
