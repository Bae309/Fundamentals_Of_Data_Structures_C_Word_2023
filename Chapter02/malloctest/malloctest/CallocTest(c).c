#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* arr;
	int num, i;

	printf("배열의 크기 : ");
	scanf("%d", &num);
	arr = (int*)calloc(num, sizeof(int)); // 0으로 자동 초기화되는 동적배열 생성

	for (i = 0; i < num; i++) { // 배열에 아직 데이터를 할당하지 않은 동적배열 출력
		printf("| %d ", arr[i]);
	}

	puts("");

	for (i = 0; i < num - 5; i++) { // 동적 배열을 순차적으로 다시 초기화
		arr[i] = i + 1;
	}

	for (i = 0; i < num; i++) { // 초기화 완료된 동적 배열을 출력
		printf("| %d ", arr[i]);
	}

	return 0;
}
