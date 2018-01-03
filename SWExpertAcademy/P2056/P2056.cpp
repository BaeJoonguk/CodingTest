#include <cstdio>
#include <cstdlib>

int dateCheck(int month, int day)
{
  int result = 0;

  if (month >= 1 && month <= 12)
  {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      if (day >= 1 && day <= 31)
        result = 1;
      else
        result = 0;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      if (day >= 1 && day <= 30)
        result = 1;
      else
        result = 0;
    }
    else if (month == 2)
    {
      if (day >= 1 && day <= 28)
        result = 1;
      else
        result = 0;
    }
  }
  else
  {
    result = 0;
  }

  return result;
}

int main()
{
  char date[8];
  char year[4];
  char month[2];
  char day[2];

  int month_num;
  int day_num;
  int T;

  scanf("%d", &T);

  for (int test_case = 1; test_case <= T; test_case++)
  {
    scanf("%s", date);

    year[0] = date[0];
    year[1] = date[1];
    year[2] = date[2];
    year[3] = date[3];

    month[0] = date[4];
    month[1] = date[5];

    day[0] = date[6];
    day[1] = date[7];

    month_num = atoi(month);
    day_num = atoi(day);

    if (dateCheck(month_num, day_num))
    {
      printf("#%d %c%c%c%c/%c%c/%c%c\n", test_case, year[0], year[1], year[2], year[3], month[0], month[1], day[0], day[1]);
    }
    else
    {
      printf("#%d -1\n", test_case);
    }
  }

  return 0;
}
