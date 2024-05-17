#include <iostream>

#define OFFSET 100

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[201][201] = {}, x, y, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;

        x += OFFSET;
        y += OFFSET;

        for(int j = x; j < x + 8; j++)
        {
            for(int k = y; k < y + 8; k++)
            {
                if(arr[j][k] < 1)
                {
                    arr[j][k]++;
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}