#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, d, x = 0, y = 0, dir = 0, sum = 0;
    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};   //N0, S1, E2, W3
    char c;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int cnt = 0;

        cin >> c >> d;
        
        if(c == 'N')
        {
            dir = 0;
        }
        else if(c == 'S')
        {
            dir = 1;
        }
        else if(c == 'E')
        {
            dir = 2;
        }
        else
        {
            dir = 3;
        }

        while(cnt < d)
        {
            x = x + dx[dir];
            y = y + dy[dir];
            sum++;

            if(x == 0 && y == 0)
            {
                cout << sum;
                return 0;
            } 
            cnt++;
        }
    }

    cout << -1;

    return 0;
}