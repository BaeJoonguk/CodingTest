#include <iostream>


int main()
{
	int TestCase = 0;
	int i = 0;
	int j = 0;
	int temp = 0;
	int sum = 0;
	int result = 0;

	scanf_s("%d", &TestCase);

	for (i = 0; i < TestCase; i++)
	{
		for (j = 0; j < 10; j++)
		{
			scanf_s("%d", &temp);
			sum += temp;
		}
		result = sum / 10;

		printf("#%d ", i + 1);
		printf("%d\n", result);

		sum = 0;
		result = 0;
	}

	return 0;
}

