#include <cstdio>
#include <cstring>

int main()
{
  char str [10] = {0};
  int T = 0;
  int i = 0;
  int test_case = 0;
  int num_str = 0;
  int medianIndex = 0;
  int isCorrect = 1;

  scanf("%d", &T);

  for (test_case = 1; test_case <= T; test_case++)
  {
    scanf("%s", str);
    num_str = strlen(str);
    medianIndex = num_str / 2 - 1;

    for (i = 0; i <= medianIndex; i++)
    {
      if (str[i] == str[num_str - 1 - i])
      {
        isCorrect = 1;
      }
      else
      {
        isCorrect = 0;
        break;
      }
    }
    printf("#%d %d\n", test_case, isCorrect);
  }
  return 0;
}
