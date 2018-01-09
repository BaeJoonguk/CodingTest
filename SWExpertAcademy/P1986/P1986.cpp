#include <cstdio>
#include <cmath>

int main()
{
  int T = 0;
  int N = 0;
  int i = 0;
  int test_case = 0;
  int result = 0;

  scanf("%d", &T);

  for (test_case = 1; test_case <= T;  test_case++)
  {
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
      result += i * pow(-1, i+1);
    }

    printf("#%d %d\n", test_case, result);
    result = 0;
  }
  return 0;
}
