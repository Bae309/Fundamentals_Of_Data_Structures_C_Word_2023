#include "listS.h"

int insertElement(int L[], int n, int x) {
	int i, k = 0, move = 0;

	for (i = 0; i < n; i++)
	{
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n)
	{
		k == n;
	}

	for (i = n; i > k; i--) {
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x;
	return move;
}