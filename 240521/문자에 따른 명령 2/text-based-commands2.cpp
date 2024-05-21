#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int x = 0, y = 0, r = 3;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'L')
        {
            r = (r + 3) % 4;
        }
        else if(str[i] == 'R')
        {
            r = (r + 1) % 4;
        }
        else
        {
            x += dx[r];
            y += dy[r];
        }
    }

    cout << x << " " << y;

    return 0;
}