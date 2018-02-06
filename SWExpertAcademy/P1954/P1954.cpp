#include <cstdio>
#include <cstdlib>

int main()
{
	int **arr;
	int T = 0;
	int N = 0;
	int test_case = 0;
	int num = 1;
	int i = 0;
	int j = 0;
	int upLimit = 0;
	int downLimit = 0;
	int lefLimit = 0;
	int rightLimit = 0;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &N);

		arr = (int**)malloc(sizeof(int*) * N);
		for (int i = 0; i < N; i++)
		{
			arr[i] = (int*)malloc(sizeof(int) * N);
		}
		upLimit = 0;
		downLimit = N - 1;
		lefLimit = 0;
		rightLimit = N;


		while (num <= N * N)
		{

			if (i == upLimit)
			{
				arr[i][j++] = num;
				if (j == rightLimit)
				{
					i++;
					j--;
					upLimit++;
				}
			}
			else if (j == rightLimit)
			{
				arr[i++][j] = num;
				if (i == downLimit)
				{
					j--;
					i--;
					rightLimit--;
				}
			}
			else if (i == downLimit)
			{
				arr[i][j--] = num;
				if (j == lefLimit)
				{
					i--;
					j++;
					downLimit++;
				}
			}


			


			num++;
		}




/*
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				arr[i][j] = ;
			}
		}
*/


		for (int i = 0; i<N; i++) {
			free(arr[i]);
		}
		free(arr);


	}

	return 0;
}