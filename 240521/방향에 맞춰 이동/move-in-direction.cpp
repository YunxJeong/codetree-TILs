#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, b, x = 0, y = 0;
    char a;
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;

        if(a == 'W')
        {
            x += dx[1] * b;
        }
        else if(a =='S')
        {
            y += dy[3] * b;
        }
        else if(a =='N')
        {
            y += dy[2] * b;
        }
        else
        {
            x += dx[0] * b;
        }
    }

    cout << x << " " << y;

    return 0;
}