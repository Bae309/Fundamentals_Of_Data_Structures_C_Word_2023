#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* arr;
	int num, i;

	printf("배열의 크기 : ");
	scanf("%d", &num);
	arr = (int*)malloc(sizeof(int) * num); //동적 배열 생성
	
	for (i = 0; i < num; i++) { // 동적 배열을 초기화 하지 않은채로 출력 -> 배열의 개수 만큼 쓰레기값이 출력
		printf("| %d ", arr[i]);
	}

	puts("");

	for (i = 0; i < num-5; i++) { // 동적 배열을 순차적으로 초기화
		arr[i] = i + 1;
	}

	for (i = 0; i < num; i++) { // 초기화 완료된 동적 배열을 출력
		printf("| %d ", arr[i]);
	}

	return 0;
}
