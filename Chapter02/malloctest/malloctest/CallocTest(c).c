#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* arr;
	int num, i;

	printf("�迭�� ũ�� : ");
	scanf("%d", &num);
	arr = (int*)calloc(num, sizeof(int)); // 0���� �ڵ� �ʱ�ȭ�Ǵ� �����迭 ����

	for (i = 0; i < num; i++) { // �迭�� ���� �����͸� �Ҵ����� ���� �����迭 ���
		printf("| %d ", arr[i]);
	}

	puts("");

	for (i = 0; i < num - 5; i++) { // ���� �迭�� ���������� �ٽ� �ʱ�ȭ
		arr[i] = i + 1;
	}

	for (i = 0; i < num; i++) { // �ʱ�ȭ �Ϸ�� ���� �迭�� ���
		printf("| %d ", arr[i]);
	}

	return 0;
}
