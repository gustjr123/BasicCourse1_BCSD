#include <stdio.h>
int HamingDistance(int x, int y);
int main(void) 
{
	int x = NULL, y = NULL;
	printf("(x y) >> ");
	scanf("%d %d",&x, &y);
	HamingDistance(x,y);

	return 0;
}

int HamingDistance(int x, int y)
{
	int count=0;
	int i=0;
	int num = x^y;
	do
	{
		count += num & 1;
		num = num >> 1;
	} while(num);
	printf("%d\n", count);
}
		