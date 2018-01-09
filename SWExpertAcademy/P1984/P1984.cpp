#include <cstdio>
#include <cmath>

int main()
{
  int arr[10] = {0};
  int T = 0;
  int i = 0;
  int test_case = 0;
  int minNum = 10000;
  int maxNum = 0;
  int minNumIndex = 0;
  int maxNumIndex = 0;
  float sum = 0;
  int averageNum = 0;

  scanf("%d", &T);

  for (test_case = 1; test_case <= T; test_case++)
  {
    minNum = 10000;
    maxNum = 0;
    minNumIndex = 0;
    maxNumIndex = 0;
    sum = 0;
    averageNum = 0;

    for (i = 0; i < 10; i++)
    {
      scanf("%d", &arr[i]);
      if (arr[i] >= maxNum)
      {
        maxNum = arr[i];
        maxNumIndex = i;
      }

      if (arr[i] <= minNum)
      {
        minNum = arr[i];
        minNumIndex = i;
      }
    }

    for (i = 0; i < 10; i++)
    {
      if (i != minNumIndex && i != maxNumIndex)
        sum += arr[i];
    }
    averageNum = int(roundf(sum / 8));

    printf("#%d %d\n", test_case, averageNum);
  }
  return 0;
}
