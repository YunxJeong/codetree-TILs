#include <iostream>

using namespace std;

bool range(int x, int y, int n)
{
    return(0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, result = 0;

    cin >> n;

    int dx[4] = {0,1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int arr[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x = 0, y = 0;

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            int cnt = 0;

            for(int r = 0; r < 4; r++)
            {
                int nx = x + dx[r];
                int ny = y + dy[r];

                if(range(nx, ny, n) && arr[nx][ny] == 1)
                {
                    cnt++;
                }

                if(cnt >= 3)
                {
                    result++;
                    break;
                }
            }   
        }
    }

    cout << result;

    return 0;
}