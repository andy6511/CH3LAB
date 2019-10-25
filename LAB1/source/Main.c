#include<stdio.h>
#include<stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+...+n=?請輸入n=");
	scanf_s("%d", &n);
	getchar();
	printf("請問要奇數和(o),偶數(e),還是整數和(i)?請選擇：");
	scanf_s("%c", &AddChoice);

	switch (AddChoice)
	{
	case'o':
		Sum = Odd(n);
		break;

	case'e':
		Sum = Even(n);
		break;

	case'i':
		Sum = TotalSum(n);
		break;
	default:
		printf("選擇錯誤\n");
		return -1;
	}

	printf("總和為%d\n", Sum);
	system("pause");
	return 0;
}
int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}

int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}
int TotalSum(int U)
{
	return Odd(U) + Even(U);
}