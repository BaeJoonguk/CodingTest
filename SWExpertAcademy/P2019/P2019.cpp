#include <cstdio>

int main()
{
  int num;
  int i;
  int mul = 1;;

  scanf("%d", &num);

  printf("%d ", mul);

  for(i = 1; i <= num; i++)
  {
    mul *= 2;
    printf("%d ", mul);
  }

  return 0;
}
