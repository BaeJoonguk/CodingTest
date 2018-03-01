#include <cstdio>
#include <cstdlib>

int main()
{	
	int **arr;
	int i = 0;
	int j = 0;
	int T = 0;
	int test_case = 0;
	int N = 0;
	int sumLength = 0;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &N);

		arr = (int**)malloc(sizeof(int*) * N);
		for (int i = 0; i<N; i++) {
			arr[i] = (int*)malloc(sizeof(int) * N);
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}


		for (i = 0; i<N; i++) {
			free(arr[i]);
		}
		free(arr);

	}

	return 0;
}