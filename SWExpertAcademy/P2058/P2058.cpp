#include <cstdio>

int main()
{
  int inputNum;
  int temp;
  int result;
  int num1, num2, num3, num4;

  scanf("%d", &inputNum);

  num1 = inputNum % 10;
  inputNum = inputNum - num1;
  num1  = num1 / 1;

  num2 = inputNum % 100;
  inputNum = inputNum - num2;
  num2 = num2 / 10;

  num3 = inputNum % 1000;
  inputNum = inputNum - num3;
  num3 = num3 / 100;

  num4 = inputNum % 10000;
  inputNum = inputNum - num4;
  num4 = num4 / 1000;

  result = num1 + num2 + num3 + num4;

  printf("%d", result);

  return 0;
}
