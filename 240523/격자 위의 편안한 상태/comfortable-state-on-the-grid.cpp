#include <iostream>

using namespace std;

bool range(int x, int y, int n)
{
    return(0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    int n, m, r, c, dir = 0;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    cin >> n >> m;

    int arr[100][100] = {};

    for(int i = 0; i < m; i++)
    {
        cin >> r >> c;

        r--;
        c--;

        int x = r, y = c, cnt = 0;
        
        arr[r][c] = 1;

        for(int j = 0; j < 4; j++)
        {
            int nx = x + dx[j];
            int ny = y + dy[j];

            if(range(nx, ny, n) && arr[nx][ny] == 1)
            {
                cnt++;
            }
        }

        if(cnt == 3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}