#include <cstdio>

int main()
{
  int sudocu[9][9] = {0};
  int arr[9] = {0};
  int T = 0;
  int test_case = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int m = 0;
  int isDuplication = 0;

  scanf("%d", &T);

  for (test_case = 1; test_case <= T; test_case++)
  {
    // 데이터 입력
    for (i = 0; i < 9; i++)
    {
      for (j = 0; j < 9; j++)
      {
        scanf("%d", &sudocu[i][j]);
      }
    }

    // 가로 검사
    for (i = 0; i < 9; i++)
    {
      for (j = 0; j < 9; j++)
      {
        if (sudocu[i][j] == 1)
          arr[0]++;
        else if (sudocu[i][j] == 2)
          arr[1]++;
        else if (sudocu[i][j] == 3)
          arr[2]++;
        else if (sudocu[i][j] == 4)
          arr[3]++;
        else if (sudocu[i][j] == 5)
          arr[4]++;
        else if (sudocu[i][j] == 6)
          arr[5]++;
        else if (sudocu[i][j] == 7)
          arr[6]++;
        else if (sudocu[i][j] == 8)
          arr[7]++;
        else if (sudocu[i][j] == 9)
          arr[8]++;
      }

      for (j = 0; j < 9; j++)
      {
        if (arr[j] != 1)
          isDuplication = 1;

        arr[j] = 0;
      }

      if (isDuplication == 1)
        break;
    }

    // 세로 검사
    for (i = 0; i < 9; i++)
    {
      for (j = 0; j < 9; j++)
      {
        if (sudocu[j][i] == 1)
          arr[0]++;
        else if (sudocu[j][i] == 2)
          arr[1]++;
        else if (sudocu[j][i] == 3)
          arr[2]++;
        else if (sudocu[j][i] == 4)
          arr[3]++;
        else if (sudocu[j][i] == 5)
          arr[4]++;
        else if (sudocu[j][i] == 6)
          arr[5]++;
        else if (sudocu[j][i] == 7)
          arr[6]++;
        else if (sudocu[j][i] == 8)
          arr[7]++;
        else if (sudocu[j][i] == 9)
          arr[8]++;
      }

      for (j = 0; j < 9; j++)
      {
        if (arr[j] != 1)
          isDuplication = 1;

        arr[j] = 0;
      }

      if (isDuplication == 1)
        break;
    }

    // 네모 검사
    for (i = 0; i < 9; i += 3)
    {
      for (j = 0; j < 9; j += 3)
      {
        for (k = i; k <= i + 2; k++)
        {
          for (m = j; m <= j + 2; m++)
          {
            if (sudocu[k][m] == 1)
              arr[0]++;
            else if (sudocu[k][m] == 2)
              arr[1]++;
            else if (sudocu[k][m] == 3)
              arr[2]++;
            else if (sudocu[k][m] == 4)
              arr[3]++;
            else if (sudocu[k][m] == 5)
              arr[4]++;
            else if (sudocu[k][m] == 6)
              arr[5]++;
            else if (sudocu[k][m] == 7)
              arr[6]++;
            else if (sudocu[k][m] == 8)
              arr[7]++;
            else if (sudocu[k][m] == 9)
              arr[8]++;
          }
        }

        for (j = 0; j < 9; j++)
        {
          if (arr[j] != 1)
            isDuplication = 1;

          arr[j] = 0;
        }

        if (isDuplication == 1)
          break;
      }
    }

    if (isDuplication == 0)
      printf("#%d 1\n", test_case);
    else
      printf("#%d 0\n", test_case);

    isDuplication = 0;
  }

  return 0;
}
