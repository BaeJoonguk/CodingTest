#include <cstdio>

int main()
{
	int T = 0;
	int i = 0;
	int num1 = 0;
	int num2 = 0;

	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf("%d %d", &num1, &num2);

		if (num1 > num2)
			printf("#%d >\n", i);
		else if (num1 < num2)
			printf("#%d <\n", i);
		else if (num1 == num2)
			printf("#%d =\n", i);
	}

    return 0;
}