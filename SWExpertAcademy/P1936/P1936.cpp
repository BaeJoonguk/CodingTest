#include <cstdio>

int main()
{
  int A, B;

  scanf("%d %d", &A, &B);

  if (A == 1)
  {
    if (B == 2)
      printf("B");
    else if (B == 3)
      printf("A");
  }
  else if (A == 2)
  {
    if (B == 1)
      printf("A");
    else if (B == 3)
      printf("B");
  }
  else if (A == 3)
  {
    if (B == 1)
      printf("B");
    else if (B == 2)
      printf("A");
  }

  return 0;
}
