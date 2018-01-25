#include <cstdio>
#include <cstdlib>

int main()
{
	int ** arr;
	int ** arrRotate90;
	int ** arrRotate180;
	int ** arrRotate270;
	int T = 0;
	int N = 0;
	int i = 0;
	int j = 0;
	int test_case = 0;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &N);
		arr = (int**)malloc(sizeof(int*) * N);
		for (i = 0; i < N; i++)
			arr[i] = (int*)malloc(sizeof(int)*N);
		
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
				scanf("%d", &arr[i][j]);
		}

		arrRotate90 = (int**)malloc(sizeof(int*) * N);
		for (i = 0; i < N; i++)
			arrRotate90[i] = (int*)malloc(sizeof(int)*N);

		arrRotate180 = (int**)malloc(sizeof(int*) * N);
		for (i = 0; i < N; i++)
			arrRotate180[i] = (int*)malloc(sizeof(int)*N);

		arrRotate270 = (int**)malloc(sizeof(int*) * N);
		for (i = 0; i < N; i++)
			arrRotate270[i] = (int*)malloc(sizeof(int)*N);

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
				arrRotate90[j][N - i - 1] = arr[i][j];
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
				arrRotate180[j][N - i - 1] = arrRotate90[i][j];
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
				arrRotate270[j][N - i - 1] = arrRotate180[i][j];
		}

		printf("#%d\n", test_case);

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
				printf("%d", arrRotate90[i][j]);
			printf(" ");

			for (j = 0; j < N; j++)
				printf("%d", arrRotate180[i][j]);
			printf(" ");

			for (j = 0; j < N; j++)
				printf("%d", arrRotate270[i][j]);
			printf("\n");
		}
		
		for (i = 0; i < N; i++)
		{
			free(arr[i]);
			free(arrRotate90[i]);
			free(arrRotate180[i]);
			free(arrRotate270[i]);
		}
		free(arr);
		free(arrRotate90);
		free(arrRotate180);
		free(arrRotate270);
	}
	return 0;
}