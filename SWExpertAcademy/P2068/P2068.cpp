#include <cstdio>

#define NUM 10

int main()
{
	int T;
	int arr[NUM];

	scanf("%d", &T);

	for (int test_case = 1; test_case <= T; test_case++)
	{
		int maxNum = 0;

		for (int i = 0; i < NUM; i++)
		{
			scanf("%d", &arr[i]);

			if (arr[i] > maxNum)
				maxNum = arr[i];
		}
		printf("#%d %d\n", test_case, maxNum);
	}
    return 0;
}