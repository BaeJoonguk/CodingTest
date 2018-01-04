#include <cstdio>

int main()
{
  int T;
  int num1, num2;
  scanf("%d", &T);

  for(int test_case = 1; test_case <= T; test_case++)
  {
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("#%d %d %d\n", test_case, num1 / num2, num1 % num2);
  }

  return 0;
}
