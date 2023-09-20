#include <iostream>

using namespace std;

void main()
{
	int arr[3] = {15,25,35};
	int* ptr = &arr[0];

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);

	cout << "===========================" << endl;

	cout << ptr[0] << " " << arr[0] << endl;
	cout << ptr[1] << " " << arr[1] << endl;
	cout << ptr[2] << " " << arr[2] << endl;
	cout << *ptr << " " << *arr << endl;
}