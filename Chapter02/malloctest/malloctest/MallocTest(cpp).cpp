#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void main()
{
	int* arr;
	int num;

	cout << "�迭�� ũ�� : ";
	cin >> num;
	arr = (int*)malloc(sizeof(int) * num); // ���� �迭 ����

	for (int i = 0; i < num; i++) // �ʱ�ȭ ���� ���� ä�� ��� -> �����Ⱚ�� ���
	{
		cout << "| " << arr[i];
	}

	cout << endl;

	for (int i = 0; i < num; i++) // ���� �迭�� ���������� �ʱ�ȭ
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < num; i++) // �ʱ�ȭ �Ϸ�� ���� �迭�� ���
	{
		cout << "| " << arr[i];
	}

}