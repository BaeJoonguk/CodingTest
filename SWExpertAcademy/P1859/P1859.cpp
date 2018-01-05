#include <cstdio>
#include <cstdlib>

int main()
{
  int* input;
  int T;
  int test_case;
  int num;
  int i;
  int profit = 0;
  int maxValue = 0;
  int maxValueIndex = 0;
  int startIndex = 0;
  int temp = 0;
  int isStop = 0;

  scanf("%d", &T);

  for(test_case = 1; test_case <= T; test_case++)
  {
    scanf("%d", &num);
    input = (int*)malloc(sizeof(int)*num);

    for (i = 0; i < num; i++)
      scanf("%d", &input[i]);

    if (isStop == 0)
    {
      // 최댓값 찾기
      for (i = startIndex; i < num; i++)
      {
        if (input[i] > maxValue)
        {
          maxValue = input[i];
          maxValueIndex = i;
        }
      }

      for (i = startIndex; i <= num; i++)
      {
        if (i <= maxValueIndex)
        {
          temp = maxValue - input[i];
          profit += temp;
        }
        else
        {
          if (i == num)
            isStop = 1;
        }
      }
      startIndex = ++maxValueIndex;
      maxValueIndex = 0;
      maxValue = 0;
    }

    printf("#%d %d", test_case, profit);

//    profit = maxValue - input[0];
//    startIndex = maxValueIndex + 1;

//    최댓값 찾고 최댓값의 인덱스 찾기
//    이익 계산
//    남은 부분에서 최댓값 찾고 최댓값의 인덱스 찾기

  }
  return 0;
}
