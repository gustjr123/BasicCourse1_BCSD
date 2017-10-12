//#include <stdio.h>
//
//void kkk(int bak, int num);
//
//int main(void)
//{
//	int num;
//	printf("1~100까지의 숫자를 입력하시오. : ");
//	scanf("%d",&num);
//	kkk(100,num);
//
//	return 0;
//}
//
//void kkk(int bak, int num)
//{
//	if(num >= bak)
//	{
//		printf("%d~%d사이넹\n",bak,bak+10);
//	}
//	else
//	{
//		return (kkk(bak-10, num));
//	}
//}

//#include <stdio.h>			// 1번 문제
//int main(void)
//{
//	int a=0, b=0;
//
//	scanf("%d %d",&a,&b);
//	if (a == b)
//	{
//		printf("=");
//	}
//	else if (a > b)
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//
//	return 0;
//}

//#include <stdio.h>			// 2번 문제
//
//int main(void)
//{
//	int input = 0;
//
//	puts("일요일 >> 1");
//	puts("월요일 >> 2");
//	puts("화요일 >> 3");
//	puts("수요일 >> 4");
//	puts("목요일 >> 5");
//	puts("금요일 >> 6");
//	puts("토요일 >> 7");
//	
//	scanf_s("%d",&input);
//
//	switch (input) 
//	{
//	case 2 : case 4 : case 6 :
//		printf("enjoy\n"); break;
//	default :
//		printf("Oops\n"); break;
//	}
//
//	return 0;
//}

//#include <stdio.h>				// 3번 문제
//
//int main(void)
//{
//	int input=0;
//
//	puts("연도 입력");
//	scanf("%d",&input);
//
//	((input%4 == 0 && input%100 != 0) || (input%400 == 0)) ? 
//		puts("YES") : puts("NO") ;
//
//	return 0;
//}
//
//#include <stdio.h>			// 4번 문제
//
//int main(void)
//{
//	int input1=0, input2=0;
//
//	scanf_s("%d %d",&input1,&input2);
//
//	if(input2%input1 == 0)
//	{
//		printf("%d | %d",input1,input2);
//	}
//	else
//	{
//		printf("%d !| %d",input1,input2);
//	}
//
//	return 0;
//}



