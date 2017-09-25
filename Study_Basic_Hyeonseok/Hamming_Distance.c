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
	int num = x^y;
	do
	{
		(num & 1) ? ++count : NULL;
		num >>= 1;
	} while(num);
	printf("%d\n", count);

	return 0;
}
	
//
//int main(void)
//{
//	int x,y,i;
//	int coumt = 0;
//	int num;
//	scanf("%d %d", &x, &y);
//
//	num = x^y;
//	for(i=1;i<32;i++)
//	{
//		num=num>>1;
//		if(num%2==1)
//			count+=1;
//	}
//	return 0;
//}