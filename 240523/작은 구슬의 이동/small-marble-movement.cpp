#include <iostream>

using namespace std;

bool range(int x, int y, int n)
{
    return(1 <= x && x <= n && 1 <= y && y <= n);
}

int check(char d)
{
    if(d == 'R')
    {
        return 0;
    }
    else if(d == 'D')
    {
        return 1;
    }
    else if(d == 'U')
    {
        return 2;
    }
    else
        return 3;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4] = {0,1, -1, 0}, dy[4] = {1, 0, 0, -1}, arr[100][100];

    int n, t, r, c, cnt = 0;
    char d;

    cin >> n >> t >> r >> c >> d;

    int dir = check(d);

    while(cnt < t)
    {
        int nx = r + dx[dir], ny = c + dy[dir];

        if(!range(nx, ny, n))
        {
            dir = 3 - dir;
            cnt++;
        }
        else
        {
            r = r + dx[dir];
            c = c + dy[dir];
            cnt++;
        }
    }

    cout << r << " " << c;
    
    return 0;
}