#include <stdio.h>

int b;

void loop(int a)
{
	if (a < 1 || a < b) return;
	loop(a - 1);
	if (a % 2 != 0) printf("%d ", a);
}

int main(void)
{
	int a;
	
	scanf_s("%d %d", &b, &a);
	loop(a);
	
	return 0;
}