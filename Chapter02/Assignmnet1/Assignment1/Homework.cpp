/*
����) ���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� �� 5���� ������ �Է¹����� 
�Է��� ������ ������ ������ ������ ����ϵ��� ����ÿ�.
-> �Էµ� ���� �߿��� �ִ밪, �Էµ� ���� �߿��� �ּҰ�, �Էµ� ������ �� ��

- ��� �Ʒ��� ���� �Լ��� ���� �����Ѵ�.
- ������ �Է¹޴� �Լ�(inputArray), �ִ��� ���ϴ� �Լ� (arraymax),
- �ּڰ��� ���ϴ� �Լ�(arrayMin), �Էµ� ������ �� ���� ���ϴ� �Լ�(arraySum)
- �����ʹ� �� ���!
- ���� �迭�� ����ص� �ǰ�, ���ص� ��!
- �� �Լ����� ������ �й��� �̸��� �ּ����� �ݵ�� ����
*/


#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inputArray(int array[], int size)
{
	for (int i = 0; i < 5; i++)
	{
		printf("�迭 %d��° ĭ�� �� ���ڸ� �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &array[i]);
	}
}


void arrayMax(int array[], int size)
{
	int maxnum = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > maxnum)
		{
			maxnum = array[i];
		}
	}

	printf("�迭 ���� ���� ���� ū ���� %d �Դϴ�.", maxnum);
}

void arrayMin(int array[], int size)
{
	int minnum = array[4];
	for (int i = size-1; i >= 0; i--)
	{
		if (array[i] < minnum)
		{
			minnum = array[i];
		}
	}

	printf("�迭 ���� �� �� ���� ���� ���� %d �Դϴ�.", minnum);
}

void arraySum(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	printf("�迭���� ���� ���� %d�Դϴ�.", sum);
}

void main()
{
	int array[5]; // ���̰� 5�� �迭 ����
	inputArray(array, 5); //inputArray �Լ� ȣ��
	printf("�Է¹��� ���� : {");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d", array[i]);
	}
	printf(" }\n");
	puts("");
	getch(

	arrayMax(array, 5);
	puts("");
	getch();

	arrayMin(array, 5);
	puts("");
	getch();

	arraySum(array, 5);


}
