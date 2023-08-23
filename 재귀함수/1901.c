#include <stdio.h>

void loop(int);

int main(void)
{
	int m;

	scanf("%d", &m);
	loop(m);

	return 0;
}

void loop(int n)
{
	if (n < 1) return;

	loop(n - 1);
	printf("%d\n", n);
}