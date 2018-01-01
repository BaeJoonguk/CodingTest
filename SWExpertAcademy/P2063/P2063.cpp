#include <cstdio>
#include <cstdlib>

int *arr;
int N;

void insertionSort(void)
{
	int temp;
	int i;
	int j;

	for (i = 1; i < N; i++)
	{
		temp = arr[i];
		j = i - 1;

		while ((temp < arr[j]) && (j >= 0))
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	int median;
	int i;

	scanf("%d", &N);
	arr = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	insertionSort();

	median = N / 2;

	printf("%d", arr[median]);

	return 0;
}