#include <cstdio>
#include <cstdlib>

int main()
{
  char arr[4];
  int num;
  int count = 0;
  int i, j;

  scanf("%d", &num);

  for(i = 1; i <= num; i++)
  {
    sprintf(arr, "%d", i);

    for(j = 0; j < 4; j++)
    {
      if (arr[j] == '3' || arr[j] == '6' || arr[j] == '9')
        count++;
    }

    if (count == 0)
    {
      printf("%d", i);
    }
    else if (count > 0)
    {
      for (j = 1; j <= count; j++)
      {
        printf("-");
      }
    }

    count = 0;
    printf(" ");
  }

  return 0;
}
