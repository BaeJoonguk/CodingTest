#include <cstdio>
#include <cstdlib>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

int main()
{
	int * arr;
	int T = 0;
	int N = 0;
	int i = 0;
	int test_case = 0;

	scanf("%d", &T);
	
	for (test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &N);

		arr = (int*)malloc(sizeof(int)*N);
		
		for (i = 0; i < N; i++)
		{
			scanf("%d", &arr[i]);
		}

		selectionSort(arr, N);

		printf("#%d ", test_case);
		for (i = 0; i < N; i++)
			printf("%d ", arr[i]);
		printf("\n");

	}
	return 0;
}