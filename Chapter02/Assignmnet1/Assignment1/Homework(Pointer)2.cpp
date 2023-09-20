#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inputArray(int *ptr, int size) // *ptr변수와 배열의 크기를 매개변수로 한 inputArray 함수
{
	for (int i = 0; i < 5; i++)
	{
		printf("배열 %d번째 칸에 들어갈 숫자를 입력하시오 : ", i + 1);
		scanf("%d", &ptr[i]); // 배열에 들어갈 숫자를 size칸만큼 입력
	}
}


void arrayMax(int *ptr, int size) // *ptr변수와 배열의 크기를 매개변수로 한 arrayMax 함수
{
	int maxnum = *ptr; // 배열의 맨 앞자리에 있는 값을 최댓값으로 지정
	for (int i = 1; i < size; i++) // 배열의 크기 size만큼 반복해서 다음 인덱스에 저장된 값과 비교
	{
		if (*(ptr + i) > maxnum)
		{
			maxnum = *(ptr + i); // 다음 인덱스에 있는 값이 maxnum보다 크면 그 값을 maxnum으로 대입
		}
	}

	printf("배열 안의 값중 가장 큰 수는 %d 입니다.", maxnum);
}

void arrayMin(int* ptr, int size) // *ptr변수와 배열의 크기를 매개변수로 한 arrayMin 함수
{
	int minnum = *ptr; // 배열의 맨 앞자리에 있는 값을 최솟값으로 지정
	for (int i = 1; i < size; i++) // 배열의 크기 size만큼 반복해서 다음 인덱스에 저장된 값과 비교
	{
		if (*(ptr + i) < minnum)
		{
			minnum = *(ptr + i); // 다음 인덱스에 있는 값이 minnum보다 크면 그 값을 minnum으로 대입
		}
	}

	printf("배열 안의 값중 가장 작은 수는 %d 입니다.", minnum);
}

/* // 역 for문을 이용해서 만든 arrayMin함수
void arrayMin(int *ptr, int size) // *ptr변수와 배열의 크기를 매개변수로 한 inputArray 함수
{
	int minnum = *(ptr + 4); 
	for (int i = size - 1; i >= 0; i--)
	{
		if (*(ptr + i) < minnum)
		{
			minnum = *(ptr + i);
		}
	}

	printf("배열 안의 값 중 가장 작은 수는 %d 입니다.", minnum);
}
*/

void arraySum(int *ptr, int size) // *ptr변수와 배열의 크기를 매개변수로 한 inputArray 함수
{
	int sum = 0; // 합을 나타내는 변수 초기화
	for (int i = 0; i < size; i++)
	{
		sum += *(ptr + i); // 배열안의 값을 순차적으로 누적시켜 저장
	}
	printf("배열안의 값의 합은 %d입니다.", sum);
}

void main()
{
	int array[5]; // 길이가 5인 배열 선언
	int* ptr = array; // 포인터 함수 ptr을 선언하여 array의 주소를 가리킴(array 자체가 배열이므로 주소연산자 사용안함)
	inputArray(array, 5); //inputArray 함수 호출
	printf("입력받은 내용 : {");
	for (int i = 0; i < 5; i++) // inputArray 함수에서 받은 값 출력
	{
		printf(" %d", *(ptr + i));
	}
	printf(" }\n");
	puts("");
	getch();

	arrayMax(array, 5); // arrayMax 함수 호출
	puts("");
	getch();

	arrayMin(array, 5); // arrayMin 함수 호출
	puts("");
	getch();

	arraySum(array, 5); // arraySum 함수 호출
}