#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void main()
{
	int* arr;
	int num;

	cout << "배열의 크기 : ";
	cin >> num;
	arr = (int*)malloc(sizeof(int) * num); // 동적 배열 생성

	for (int i = 0; i < num; i++) // 초기화 하지 않은 채로 출력 -> 쓰레기값이 출력
	{
		cout << "| " << arr[i];
	}

	cout << endl;

	for (int i = 0; i < num; i++) // 동적 배열을 순차적으로 초기화
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < num; i++) // 초기화 완료된 동적 배열을 출력
	{
		cout << "| " << arr[i];
	}

}