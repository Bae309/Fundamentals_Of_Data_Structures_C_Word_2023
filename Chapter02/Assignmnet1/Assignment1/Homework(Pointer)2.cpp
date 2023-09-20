#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inputArray(int *ptr, int size) // *ptr������ �迭�� ũ�⸦ �Ű������� �� inputArray �Լ�
{
	for (int i = 0; i < 5; i++)
	{
		printf("�迭 %d��° ĭ�� �� ���ڸ� �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &ptr[i]); // �迭�� �� ���ڸ� sizeĭ��ŭ �Է�
	}
}


void arrayMax(int *ptr, int size) // *ptr������ �迭�� ũ�⸦ �Ű������� �� arrayMax �Լ�
{
	int maxnum = *ptr; // �迭�� �� ���ڸ��� �ִ� ���� �ִ����� ����
	for (int i = 1; i < size; i++) // �迭�� ũ�� size��ŭ �ݺ��ؼ� ���� �ε����� ����� ���� ��
	{
		if (*(ptr + i) > maxnum)
		{
			maxnum = *(ptr + i); // ���� �ε����� �ִ� ���� maxnum���� ũ�� �� ���� maxnum���� ����
		}
	}

	printf("�迭 ���� ���� ���� ū ���� %d �Դϴ�.", maxnum);
}

void arrayMin(int* ptr, int size) // *ptr������ �迭�� ũ�⸦ �Ű������� �� arrayMin �Լ�
{
	int minnum = *ptr; // �迭�� �� ���ڸ��� �ִ� ���� �ּڰ����� ����
	for (int i = 1; i < size; i++) // �迭�� ũ�� size��ŭ �ݺ��ؼ� ���� �ε����� ����� ���� ��
	{
		if (*(ptr + i) < minnum)
		{
			minnum = *(ptr + i); // ���� �ε����� �ִ� ���� minnum���� ũ�� �� ���� minnum���� ����
		}
	}

	printf("�迭 ���� ���� ���� ���� ���� %d �Դϴ�.", minnum);
}

/* // �� for���� �̿��ؼ� ���� arrayMin�Լ�
void arrayMin(int *ptr, int size) // *ptr������ �迭�� ũ�⸦ �Ű������� �� inputArray �Լ�
{
	int minnum = *(ptr + 4); 
	for (int i = size - 1; i >= 0; i--)
	{
		if (*(ptr + i) < minnum)
		{
			minnum = *(ptr + i);
		}
	}

	printf("�迭 ���� �� �� ���� ���� ���� %d �Դϴ�.", minnum);
}
*/

void arraySum(int *ptr, int size) // *ptr������ �迭�� ũ�⸦ �Ű������� �� inputArray �Լ�
{
	int sum = 0; // ���� ��Ÿ���� ���� �ʱ�ȭ
	for (int i = 0; i < size; i++)
	{
		sum += *(ptr + i); // �迭���� ���� ���������� �������� ����
	}
	printf("�迭���� ���� ���� %d�Դϴ�.", sum);
}

void main()
{
	int array[5]; // ���̰� 5�� �迭 ����
	int* ptr = array; // ������ �Լ� ptr�� �����Ͽ� array�� �ּҸ� ����Ŵ(array ��ü�� �迭�̹Ƿ� �ּҿ����� ������)
	inputArray(array, 5); //inputArray �Լ� ȣ��
	printf("�Է¹��� ���� : {");
	for (int i = 0; i < 5; i++) // inputArray �Լ����� ���� �� ���
	{
		printf(" %d", *(ptr + i));
	}
	printf(" }\n");
	puts("");
	getch();

	arrayMax(array, 5); // arrayMax �Լ� ȣ��
	puts("");
	getch();

	arrayMin(array, 5); // arrayMin �Լ� ȣ��
	puts("");
	getch();

	arraySum(array, 5); // arraySum �Լ� ȣ��
}