#include <iostream>
using namespace std;

void main()
{
	int* arr;
	int num, i;

	cout << "�迭�� ũ�� : ";
	cin >> num;
	arr = (int*)calloc(num, sizeof(int)); // 0���� �ڵ� �ʱ�ȭ�Ǵ� �����迭 ����

	for (i = 0; i < num; i++) // �迭�� ���� �����͸� �Ҵ����� ���� �����迭 ���
	{
		cout << "| " << arr[i];
	}

	cout << endl;

	for (i = 0; i < num; i++) // ���� �迭�� ���������� �ٽ� �ʱ�ȭ
	{
		arr[i] = i + 1;
	}

	for (i = 0; i < num; i++)  // �ʱ�ȭ �Ϸ�� ���� �迭�� ���
	{
		cout << "| " << arr[i];
	}
}