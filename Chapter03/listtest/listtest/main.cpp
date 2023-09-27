#pragma warning(disable : 4996)
#include <stdio.h>
#include "listS.h"

int main(void) {
	int list[Max] = { 10,20,40,50,60,70 };
	int i, move, num, size = 6;
	printf("\n삽입 전 선형리스트 : ");
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	printf("\n원소의 갯수 : %d \n", size);
	printf("삽입하고 싶은 숫자를 입력해주세요 : ");
	scanf("%d", &num);
	move = insertElement(list, size, num); //30을 내가 원하는 갯수로 바꾸기..... scanf로 바꿔서

	printf("\n삽입 후 선형리스트 : ");
	for (i = 0; i <= size; i++) printf("%3d ", list[i]);
	printf("\n원소의 갯수 : %d", ++size);
	printf("\n자리 이동 횟수 : %d \n", move);

	move = deleteElement(list, size, num);
	if (move == size) printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n");
	else {
		printf("\n삭제 후 선형 리스트 : ");
		for (i = 0; i < size - 1; i++) printf("%3d ", list[i]);
		printf("\n원소의 갯수 : %d", --size);
		printf("\n자리 이동 횟수 : %d\n", move);
	}

	getchar();
	return 0;
}