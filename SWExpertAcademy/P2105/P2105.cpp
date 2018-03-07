#include <cstdio>
#include <cstdlib>

// 맵 사이즈 저장한 변수
int N;
// 맵 정보를 저장한 배열
int map[20][20];
// 방문 여부 체크용 배열
bool isVisit[101];
// 가장 긴 경로 길이 저장하는 변수
int result;

// isVisit 배열을 모두 false로 초기화
void visitClear()
{
	for (int i = 0; i < 101; i++)
		isVisit[i] = false;
}

// 처음 시작시 호출 할 함수
void init()
{
	visitClear();
	result = -1;
}

void solve()
{
	// i, j 좌표부터 시작
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			// 사각형의 변의 길이는 각각 a, b 이다.


		}
	}
}


int main()
{
	int test_case;
	scanf("%d", &test_case);
	for (int tc = 1; tc <= test_case; tc++)
	{
		// 시작 시 초기화
		init();

		scanf("%d", &N);
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				scanf("%d", &map[i][j]);
		
		// 답을 내는 부분
		solve();

		// 결과값 출력
		printf("#%d %d\n", tc, result);
	}
	return 0;

/*
	
	int **arr;
	int T = 0;
	int N = 0;
	int test_case = 0;
	int i = 0;
	int j = 0;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d", &N);
		
		arr = (int**)malloc(sizeof(int*) * N);
		for (i = 0; i < N; i++)
		{
			arr[i] = (int*)malloc(sizeof(int) * N);
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}





	}

	return 0;

*/

}