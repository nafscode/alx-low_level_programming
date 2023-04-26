#include <stdio.h>


void print_times_table(int n)
{
	int i, j, k;

	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (n < 0 && n > 15)
				{
					return;
				}
				if (j == 0)
				{
					printf("%d", k);
				}
				if (k < 10 && n != 0)
				{
					printf(",   %d", k);
				}
				else if (k >= 10 && k < 100)
				{
					printf(",  %d", k);
				}
				else if (k >= 100)
				{
					printf(", %d", k);
				}
			}
			printf("\n");
		}
	}
}

int main(void)
{
	print_times_table(2);
	print_times_table(10);
	print_times_table(13);
	print_times_table(-2);
	print_times_table(0);
	print_times_table(100);
	return (0);
}
