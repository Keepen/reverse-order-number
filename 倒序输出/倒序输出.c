#include<stdio.h>
#include<stdlib.h>

//�������һ������

void print(int n)
{
	int temp = n;
	//�ж��Ƿ����0
	if (temp == 0)
	{
		printf("%d\n", temp);
	}
	//С��10��������
	if (temp > 0 && temp < 10) 
	{
		printf("%d\n", temp);
	}
	//����10��������
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
	//����-10�ĸ�����
	if (temp < 0 && temp>-10)
	{
		printf("%d\n", temp);
	}
	//С��-10�ĸ�����
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