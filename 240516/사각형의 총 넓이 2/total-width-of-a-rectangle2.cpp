#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x1, y1, x2, y2, arr[201][201] = {}, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;

        for(int j = x1; j < x2; j++)
        {
            for(int k = y1; k < y2; k++)
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