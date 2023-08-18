#include <stdio.h>

int main(void)
{
	int num, arr[4] = { 0, };

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i] < arr[j]) {
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}