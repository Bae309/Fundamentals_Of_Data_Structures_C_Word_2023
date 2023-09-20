#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int* arr;
	int num = 0, count = 1, i;
	arr = (int*)malloc(sizeof(int) * count); // 동적 배열 할당

	while (num != EOF)
	{
		printf("수 입력, -1을 입력하면 종료 : ");
		scanf("%d", &num);
		arr = (int*)realloc(arr, sizeof(int) * count);
		arr[count - 1] = num;
		for (i = 0; i < count; i++) {
			printf("| %d", arr[i]);
		}
		printf("\n");
		count++;
	}

	if (NULL != arr)
	{
		free(arr);
		arr == NULL;
	}
}