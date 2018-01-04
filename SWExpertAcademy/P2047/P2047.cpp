#include <cstdio>

#define MAX_SIZE 80

int main()
{
  int i;
  char arr[MAX_SIZE];

  scanf("%s", arr);

  while (arr[i] != NULL)
  {
    if (arr[i] >= 97 && arr[i] <= 122)
    {
      arr[i] = arr[i] - 32;
    }

    printf("%c", arr[i]);
    i++;
  }
  return 0;
}
