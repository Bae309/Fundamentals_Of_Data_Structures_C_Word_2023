/*
문제) 길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력받은뒤
입력이 끝나면 다음의 내용의 내용을 출력하도록 만드시오.
-> 입력된 정수 중에서 최대값, 입력된 정수 중에서 최소값, 입력된 정수의 총 합

- 모두 아래의 같은 함수를 만들어서 구현한다.
- 정수를 입력받는 함수(inputArray), 최댓값을 구하는 함수 (arraymax),
- 최솟값을 구하는 함수(arrayMin), 입력된 정수의 총 합을 구하는 함수(arraySum)
- 포인터는 꼭 사용!
- 동적 배열은 사용해도 되고, 안해도 됨!
- 각 함수마다 본인의 학번과 이름을 주석으로 반드시 기입
*/


#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>


void inputArray(int ptrarray[], int size) // 포인터 배열과 배열의 크기를 매개변수로 한 inputArray함수
{
	for (int i = 0; i < size; i++)
	{
		printf("배열 %d번째 칸에 들어갈 숫자를 입력하시오 : ", i + 1);
		scanf("%d", &ptrarray[i]);
	}
}


void arrayMax(int ptrarray[], int size) // 포인터 배열과 배열의 크기를 매개변수로 한 arrayMax함수
{
	int maxnum = ptrarray[0];
	for (int i = 1; i < size; i++)
	{
		if (ptrarray[i] > maxnum)
		{
			maxnum = ptrarray[i];
		}
	}

	printf("배열 안의 값 중 가장 큰 수는 %d 입니다.", maxnum);
}

void arrayMin(int ptrarray[], int size) // 포인터 배열과 배열의 크기를 매개변수로 한 arrayMin 함수
{
	int minnum = ptrarray[4];
	for (int i = size - 1; i >= 0; i--)
	{
		if (ptrarray[i] < minnum)
		{
			minnum = ptrarray[i];
		}
	}

	printf("배열 안의 값 중 가장 작은 수는 %d 입니다.", minnum);
}

void arraySum(int ptrarray[], int size) // 포인터 배열과 배열의 크기를 매개변수로 한 arraySum함수
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += ptrarray[i];
	}
	printf("배열안의 값의 합은 %d입니다.", sum);
}

void main()
{
	int array[5]; // 길이가 5인 배열 선언
	
	inputArray(array, 5); //inputArray 함수 호출
	printf("입력받은 내용 : {");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d", array[i]);
	}
	printf(" }\n");
	puts("");
	

	arrayMax(array, 5); //arrayMax 함수 호출
	puts("");
	

	arrayMin(array, 5); // arrayMin 함수 호출
	puts("");


	arraySum(array, 5); // arraySum 함수 호출


}