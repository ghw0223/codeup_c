#include <stdio.h>

int main(void)
{
	int arr[100][100] = { 0, }, h, w, n, l, d, x, y;

	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	while (n--)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);

		if (!d)
		{
			for (int i = 0; i < l; i++)
			{
				arr[y - 1 + i][x - 1] = 1;
			}
		}
		else
		{
			for (int i = 0; i < l; i++)
			{
				arr[y - 1][x - 1 + i] = 1;
			}
		}

	}

	for (int i = 0; i < h; i++, puts(""))
	{
		for (int j = 0; j < w; j++)
		{
			printf("%d ", arr[j][i]);
		}
	}

	return 0;
}

