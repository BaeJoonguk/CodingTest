#include <cstdio>

int main()
{
  int exchange[8] = {0};
  int T = 0;
  int test_case = 0;
  int money = 0;

  scanf("%d", &T);

  for (test_case = 1; test_case <= T; test_case++)
  {
    scanf("%d", &money);

    exchange[0] = money / 50000;
    money = money - exchange[0] * 50000;

    exchange[1] = money / 10000;
    money = money - exchange[1]* 10000;

    exchange[2] = money / 5000;
    money = money - exchange[2] * 5000;

    exchange[3] = money / 1000;
    money = money - exchange[3] * 1000;

    exchange[4] = money / 500;
    money = money - exchange[4] * 500;

    exchange[5] = money / 100;
    money = money - exchange[5] * 100;

    exchange[6] = money / 50;
    money = money - exchange[6] * 50;

    exchange[7] = money / 10;
    money = money - exchange[7] * 10;

    printf("#%d\n%d %d %d %d %d %d %d %d\n", test_case, exchange[0], exchange[1], exchange[2], exchange[3], exchange[4], exchange[5], exchange[6], exchange[7]);
  }

  return 0;
}
