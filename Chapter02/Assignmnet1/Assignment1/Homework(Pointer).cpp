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


void inputArray(int ptrarray[], int size) // ������ �迭�� �迭�� ũ�⸦ �Ű������� �� inputArray�Լ�
{
	for (int i = 0; i < size; i++)
	{
		printf("�迭 %d��° ĭ�� �� ���ڸ� �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &ptrarray[i]);
	}
}


void arrayMax(int ptrarray[], int size) // ������ �迭�� �迭�� ũ�⸦ �Ű������� �� arrayMax�Լ�
{
	int maxnum = ptrarray[0];
	for (int i = 1; i < size; i++)
	{
		if (ptrarray[i] > maxnum)
		{
			maxnum = ptrarray[i];
		}
	}

	printf("�迭 ���� �� �� ���� ū ���� %d �Դϴ�.", maxnum);
}

void arrayMin(int ptrarray[], int size) // ������ �迭�� �迭�� ũ�⸦ �Ű������� �� arrayMin �Լ�
{
	int minnum = ptrarray[4];
	for (int i = size - 1; i >= 0; i--)
	{
		if (ptrarray[i] < minnum)
		{
			minnum = ptrarray[i];
		}
	}

	printf("�迭 ���� �� �� ���� ���� ���� %d �Դϴ�.", minnum);
}

void arraySum(int ptrarray[], int size) // ������ �迭�� �迭�� ũ�⸦ �Ű������� �� arraySum�Լ�
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += ptrarray[i];
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
	

	arrayMax(array, 5); //arrayMax �Լ� ȣ��
	puts("");
	

	arrayMin(array, 5); // arrayMin �Լ� ȣ��
	puts("");


	arraySum(array, 5); // arraySum �Լ� ȣ��


}