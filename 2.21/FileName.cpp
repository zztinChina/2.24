#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 2;
	while (n)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
		else
			i++;
	}
	return 0;
}
