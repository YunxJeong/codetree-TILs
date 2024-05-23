#include <iostream>

using namespace std;

bool range(int x, int y, int n)
{
    return(0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, n, m;

    cin >> n >> m;

    int answer[n][m] = {}, x = 0, y = 0, dir = 0;

    answer[x][y] = 1;

    for(int i = 2; i <= n * n; i++)
    {
        int nx = x + dx[dir], ny = y + dy[dir];

        if(!range(nx, ny, n) || answer[nx][ny] != 0)
        {
            dir = (dir + 1) % 4;
        }

        x = x + dx[dir];
        y = y + dy[dir];

        answer[x][y] = i;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}