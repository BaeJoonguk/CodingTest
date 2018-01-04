#include <cstdio>

int main()
{
  int password;
  int num;

  scanf("%d", &password);
  scanf("%d", &num);

  printf("%d", password - num + 1);

  return 0;
}
