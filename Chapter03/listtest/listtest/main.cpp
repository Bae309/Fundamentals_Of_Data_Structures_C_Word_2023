#pragma warning(disable : 4996)
#include <stdio.h>
#include "listS.h"

int main(void) {
	int list[Max] = { 10,20,40,50,60,70 };
	int i, move, num, size = 6;
	printf("\n���� �� ��������Ʈ : ");
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	printf("\n������ ���� : %d \n", size);
	printf("�����ϰ� ���� ���ڸ� �Է����ּ��� : ");
	scanf("%d", &num);
	move = insertElement(list, size, num); //30�� ���� ���ϴ� ������ �ٲٱ�..... scanf�� �ٲ㼭

	printf("\n���� �� ��������Ʈ : ");
	for (i = 0; i <= size; i++) printf("%3d ", list[i]);
	printf("\n������ ���� : %d", ++size);
	printf("\n�ڸ� �̵� Ƚ�� : %d \n", move);

	move = deleteElement(list, size, num);
	if (move == size) printf("\n���� ����Ʈ�� ���Ұ� ��� ������ �� �����ϴ�.\n");
	else {
		printf("\n���� �� ���� ����Ʈ : ");
		for (i = 0; i < size - 1; i++) printf("%3d ", list[i]);
		printf("\n������ ���� : %d", --size);
		printf("\n�ڸ� �̵� Ƚ�� : %d\n", move);
	}

	getchar();
	return 0;
}