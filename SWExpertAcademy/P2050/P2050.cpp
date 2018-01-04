#include <cstdio>

#define MAX_SIZE 200

int main()
{
  int i = 0;
  char arr[MAX_SIZE];

  scanf("%s", arr);

  while (arr[i] != NULL)
  {
    printf("%d ", arr[i] -'@');
    i++;
  }

  return 0;
}
