#include <cstdio>

int main()
{
  int arr[10][10] = {0};
  int T = 0;
  int N = 0;
  int i = 0;
  int j = 0;
  int test_case = 0;

  scanf("%d", &T);

  for(test_case = 1; test_case <= T; test_case++)
  {
    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
      for(j = 0; j <= i; j++)
      {
        if (j == 0 || j == i)
        {
          arr[i][j] = 1;
        }
        else
        {
          arr[i][j]  = arr[i-1][j-1] + arr[i-1][j];
        }
      }
    }

    printf("#%d\n", test_case);
    for (i = 0; i < N; i++)
    {
      for (j = 0; j <= i; j++)
      {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }



  }
}
