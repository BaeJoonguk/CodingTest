#include <cstdio>
#include <cstdlib>

int main()
{
  int** arr;

  int T = 0;
  int M = 0;
  int N = 0;
  int i = 0;
  int j = 0;
  int test_case = 0;
  int sum = 0;
  int max_sum = 0;

  scanf("%d", &T);

  for(test_case = 1; test_case <= T; test_case++)
  {
    scanf("%d %d", &N, &M);

    // 2차원 배열 할당
    arr = (int**) malloc(sizeof(int*) * N);
    for (i = 0; i < N; i++)
    {
      arr[i] = (int*)malloc(sizeof(int) * N);
    }

    for (i = 0; i < N; i++)
    {
      for (j = 0; j < N; j++)
      {
        scanf("%d", &arr[i][j]);
      }
    }

    for (i = 0; i < ; i++)
    {
      for (j = 0; j < ; j++)
      {
        sum = arr[i][j] + ;

        if(sum > max_sum)
          max_sum = sum;
      }
    }







/*
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < N; j++)
      {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
*/

    // 2차원 배열 해제
    for (i = 0; i < N; i++)
    {
      free(arr[i]);
    }
    free(arr);


  }

  return 0;
}
