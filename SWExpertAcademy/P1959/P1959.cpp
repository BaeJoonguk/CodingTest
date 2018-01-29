#include <cstdio>
#include <cstdlib>

int main()
{
	int * arrA;
	int * arrB;
	int T = 0;
	int N = 0;
	int M = 0;
	int i = 0;
	int j = 0;
	int lengthDifference = 0;
	int shortLength = 0;
	int test_case = 0;
	int sum = 0;
	int maxValue = 0;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d %d", &N, &M);
		
		arrA = (int *)malloc(sizeof(int) * N);
		arrB = (int *)malloc(sizeof(int) * M);

		for (i = 0; i < N; i++)
			scanf("%d", &arrA[i]);

		for (i = 0; i < M; i++)
			scanf("%d", &arrB[i]);

		if (N >= M)
		{
			lengthDifference = N - M;
			shortLength = M;
		}
		else
		{
			lengthDifference = M - N;
			shortLength = N;
		}

		for (i = 0; i <= lengthDifference; i++)
		{
			for (j = 0; j < shortLength; j++)
			{
				if(N >= M)
					sum += arrB[j] * arrA[i + j];
				else
					sum += arrA[j] * arrB[i + j];
			}

			if (sum > maxValue)
				maxValue = sum;

			sum = 0;
		}

		printf("#%d %d\n", test_case, maxValue);
		maxValue = 0;
	}
	return 0;
}