#include <cstdio>

int main()
{
	int T = 0;
	int i = 0;
	int j = 0;
	int arr[10];
	int sum = 0;

	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		for (j = 0; j < 10; j++)
		{
			scanf("%d", &arr[j]);

			if (arr[j] % 2 == 1)
				sum += arr[j];
		}

		printf("#%d %d\n", i, sum);
		sum = 0;
	}

    return 0;
}