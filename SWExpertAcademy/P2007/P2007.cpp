#include <cstdio>

int main()
{
  char strInput[30] = {0};
  char strPattern[10] = {0};
  int T = 0;
  int test_case = 0;
  int i;
  int patternCount = 1;
  int isCorrect = 0;

  scanf("%d", &T);

  for (test_case = 1; test_case <= T; test_case++)
  {
    scanf("%s", strInput);

    for (patternCount = 1; patternCount <= 10; patternCount++)
    {
      strPattern[patternCount-1] = strInput[patternCount-1];

      for (i = 0; i < 30; i++)
      {
        if (strPattern[i%patternCount] == strInput[i])
        {
//          printf("%c   %c   %d     %d\n", strPattern[i%patternCount], strInput[i], i, patternCount);

        }
        else
        {
          if (i > 10)
          {
            isCorrect = 1;
          }
          else
          {
            isCorrect = 0;
          }
          break;
        }
      }

      if (isCorrect == 1)
        break;
    }

    printf("#%d %d\n", test_case, patternCount);
  }
  return 0;
}
