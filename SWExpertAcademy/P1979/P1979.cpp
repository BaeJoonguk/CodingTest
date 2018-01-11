#include <cstdio>
#include <cstdlib>

int main()
{
  int **arr;
  int T = 0;
  int test_case = 0;
  int N = 0;
  int K = 0;
  int i = 0;
  int j = 0;


  scanf("%d", &T);

  for (test_case = 1; test_case <= T; test_case++)
  {
    scanf("%d %d", &N, &K);

    arr = (int**) malloc(sizeof(int*) * N);
    for (i = 0; i < N; i++)
    {
      arr[i] = (int*) malloc(sizeof(int) * N);
    }

    for (i = 0; i < N; i++)
    {
      for (j = 0; j < N; j++)
      {
        scanf("%d", &arr[i][j]);
      }
    }

    for (i = 0; i < N; i++)
    {
      for (j = 0; j < N; j++)
      {
        printf("%d ",arr[i][j]);
      }
        printf("\n");
    }

  }


  return 0;
}
