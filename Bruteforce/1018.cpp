#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;




int M, N;

char board[51][51];

//(0, 0)이 W인 체스보드
char wb[8][8] =
{
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W'
};
char bw[8][8] =
{
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B'
};

int white_first(int x, int y) {
	int result = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != wb[i][j])
				result++;
		}
	}
	return result;
}

int black_first(int x, int y) {
	int result = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != bw[i][j])
				result++;
		}
	}
	return result;
}
int main()
{
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>board[i][j];
        }
    }
    int minresult = 123456789;
    for(int i = 0; i + 8 <= N; i++)
    {
        for(int j = 0; j + 8 <= M; j++)
        {
            int res;
            res = min(white_first(i,j),black_first(i,j));
            if(res < minresult) {
                minresult = res;
            }
        }
    }
    cout<<minresult<<'\n';
}