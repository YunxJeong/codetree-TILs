#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int x = 0, y = 0, result = 0, dir = 3;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'L')
        {
            dir = (dir + 3) % 4;
        }
        else if(str[i] == 'R')
        {
            dir = (dir + 1) % 4;
        }
        else
        {
            x += dx[dir];
            y += dy[dir];
        }

        result++;

        if(x == 0 && y == 0)
        {
            cout << result;
            return 0;
        }
    }
    cout << -1;
    return 0;
}