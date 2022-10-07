#include<iostream>
using namespace std;

const int MAX = 705;

int N,M;                
int Answer;             
int Map[MAX][MAX];      

bool Visit[MAX][MAX];   
bool IsHill;            
int area;

int drow[4] = {0,  0,-1, 1};
int dcol[4] = {1, -1, 0, 0};

void DFS(int row, int col)
{
	Visit[row][col] = true;
    area++;
    if (row == 0 || col == 0 || row == N-1 || col == M-1) IsHill = false;

	for(int i = 0; i < 4; i++)
	{
		int r = row + drow[i];
		int c = col + dcol[i];
        if (r >= 0 && c >= 0 && r < N && c < M)
		if(Map[r][c] == 0 && !Visit[r][c])  DFS(r, c);
	}
}

int main()
{
	ios::sync_with_stdio(false);

	cin >> N >> M;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
		{
			cin >> Map[i][j];
			Visit[i][j] = false;
		}

	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			if(!Visit[i][j] && Map[i][j] == 0)
			{
				IsHill = true;
                area = 0;
				DFS(i, j);
				if(IsHill) Answer+=area;
			}
	cout << Answer << endl;

	return 0;
}