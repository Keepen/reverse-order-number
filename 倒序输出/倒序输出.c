#include<stdio.h>
#include<stdlib.h>

//倒序输出一个数字

void print(int n)
{
	int temp = n;
	//判断是否等于0
	if (temp == 0)
	{
		printf("%d\n", temp);
	}
	//小于10的正整数
	if (temp > 0 && temp < 10) 
	{
		printf("%d\n", temp);
	}
	//大于10的正整数
	if (temp >= 10)
	{
		int tmp = 0;
		if (temp % 10 == 0)
		{
			while (temp >= 10)
			{
				temp = temp / 10;
			}
			printf("%d\n", temp);
			return;
		}
		else if (temp % 10 != 0) 
		{
			while (temp)
			{
				{
					tmp = temp % 10;
					printf("%d ", tmp);
					temp = temp / 10;
				}
			}
		}
	}
	//大于-10的负整数
	if (temp < 0 && temp>-10)
	{
		printf("%d\n", temp);
	}
	//小于-10的负整数
	if (temp <= -10)
	{
		int tmp = 0;
		printf("-");
		temp = -temp;
		if (temp % 10 == 0)
		{
			while (temp >= 10)
			{
				temp = temp / 10;
			}
			printf("%d\n", temp);
			return;
		}
		else if (temp % 10 != 0)
		{
			while (temp)
			{
				{
					tmp = temp % 10;
					printf("%d ", tmp);
					temp = temp / 10;
				}
			}
		}
	}
}



int main()
{
	//print(0);
	print(1011);
	//print(-101);
	//print(100);
	//print(-100);
	//printf("%d\n", 100 % 10);
	system("pause");
	return 0;
}