#include <stdio.h>

//			1번 문제

int first(void)
{
	int i=0;
	for( ; ; )
	{
		printf("아아아아\n");
	}

	while (1)
	{
		printf("아아아아\n");
	}

	do {
		printf("아아아아아\n");
	} while(1);

	return ;
}


//				2번 문제

int second(void)
{
	int i=0;

	scanf("%d",&i);
	
	for(i=0; i<10; i++)
	{
		printf("*");
	}

	return ;
}


//					3번 문제

int third(void)
{
	int i=0;

	for(i=1; i<=100; i++)
	{
		if (i%2 == 0)
		{
			printf("Fizz");
		}
		if (i%5 == 0)
		{
			printf("Buzz");
		}
		else if (i%2)
			printf("%d",i);

		printf("\n");
	}

	return ;
}


//						4번 문제

int fourth(void)
{
	int input[7];
	int i=0, MAX=0, MIN=0;

	scanf("%d %d %d %d %d %d %d",&input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6]);

	MAX = input[0];

	for (i=0; i<7; i++)
	{
		MAX = (MAX > input[i]) ? MAX : input[i] ;
	}

	MIN = input[0];

	for (i=0; i<7; i++)
	{
		MIN = (MIN < input[i]) ? MIN : input[i] ;
	} 

	printf("MAX = %d, MIN = %d\n",MAX, MIN);

	return ;
}

//						5번 문제
int fifth(void)
{
	int i=0;
	int input=0;
	int sum=0, count=0, mul=1;

	scanf("%d",&input);

	for(i=1; i<=input; i++)
	{
		if (input%i == 0)
		{
			printf("%d ",i);
			sum += i;
			count++;
			mul *= i;
		}
	}
	printf("\n");

	printf("%d\n",count);
	printf("%d\n",sum);
	printf("%d\n",mul%10);

	return ;
}

int main(void)
{
	first();
	second();
	third();
	fourth();
	fifth();

	return 0;
}
