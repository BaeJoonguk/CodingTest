#include <cstdio>
#include <cstdlib>

// �� ������ ������ ����
int N;
// �� ������ ������ �迭
int map[20][20];
// �湮 ���� üũ�� �迭
bool isVisit[101];
// ���� �� ��� ���� �����ϴ� ����
int result;

// isVisit �迭�� ��� false�� �ʱ�ȭ
void visitClear()
{
	for (int i = 0; i < 101; i++)
		isVisit[i] = false;
}

// ó�� ���۽� ȣ�� �� �Լ�
void init()
{
	visitClear();
	result = -1;
}

void solve()
{
	// i, j ��ǥ���� ����
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			// �簢���� ���� ���̴� ���� a, b �̴�.


		}
	}
}


int main()
{
	int test_case;
	scanf("%d", &test_case);
	for (int tc = 1; tc <= test_case; tc++)
	{
		// ���� �� �ʱ�ȭ
		init();

		scanf("%d", &N);
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				scanf("%d", &map[i][j]);
		
		// ���� ���� �κ�
		solve();

		// ����� ���
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