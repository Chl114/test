#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>

void hw1(void);
void hw2(void);
void hw3(void);

int main()
{
	//hw1();
	//hw2();
	hw3();


	return 0;
}

void hw1()
{
	int num1[6] = { 1,2,3,4,5,6 };
	int num2[6] = { 1,2,3,7,8,9 };
	int temp[6] = { 0 };
	int count = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (num1[i] == num2[j])
			{
				temp[count] = num1[i];
				count++;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d ", temp[i]);
	}
	printf("\n");
}

void hw2()
{
	int a, n;
	int sum = 0;

	printf("输入加数：");
	scanf("%d", &a);
	printf("输入相加次数：");
	scanf("%d", &n);

	if (a <= 9 && n <= 9)
	{
		for (int i = 0; i < n; i++)
		{
			sum += a;
			a = a * 10 + a;
		}
	}
	else
	{
		printf("输入有误！");
	}

	printf("sum = %d\n", sum);

}

void hw3()
{
	char str[10] = { 0 };
	scanf("%s", str);
	int arr[3] = { 0 };
	int mul = 1, num = 0;
	 
	for (int i = 0; i < (strlen(str)); i++)
	{
		arr[i] = str[i] - 48;
	}

	for (int i = 0; i < strlen(str)-1; i++)
	{
		mul *= 10;
	}

	for (int i = 0; i < 3; i++)
	{
		num = arr[i] * mul + num;
		mul = mul / 10;
	}

	printf("%d\n", num);
}

