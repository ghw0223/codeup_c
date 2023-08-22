#include <stdio.h>

void print_30_minutes_ago_clock(int hour, int minute)
{
	minute -= 30;
	printf("%d %d", hour, minute);
}

int main(void)
{
	int h, m;

	scanf_s("%d %d", &h, &m);

	if (m < 30) {
		h -= 1;
		m += 60;

		if (h < 0) h = 23;

		print_30_minutes_ago_clock(h, m);
	}
	else {
		print_30_minutes_ago_clock(h, m);
	}

	return 0;
}