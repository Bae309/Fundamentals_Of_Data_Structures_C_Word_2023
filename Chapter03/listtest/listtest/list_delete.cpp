#include "listS.h"

int deleteElement(int L[], int n, int x) {
	int i, k = n, move = 0;

	for (i = 0; i < n; i++) {
		if (L[i] == x) {
			k = i;
			break;
		}
	}
	if (i == n) move = n;

	for (i = k; i < n - 1; i++) {
		L[i] = L[i + 1];
		move++;
	}

	return move;
}

