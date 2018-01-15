#include <cstdio>

int main()
{
  int T = 0;
  int test_case = 0;
  int hour1 = 0;
  int hour2 = 0;
  int hourSum = 0;
  int min1 = 0;
  int min2 = 0;
  int minSum = 0;

  scanf("%d", &T);

  for (test_case = 1; test_case <= T; test_case++)
  {
    scanf("%d %d %d %d", &hour1, &min1, &hour2, &min2);

    hourSum = hour1 + hour2;
    minSum = min1 + min2;

    if (minSum >= 60)
    {
      minSum -= 60;
      hourSum++;
    }

    if (hourSum > 12)
    {
      hourSum -= 12;
    }

    printf("#%d %d %d\n", test_case, hourSum, minSum);
  }

  return 0;
}
