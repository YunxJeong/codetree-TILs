#include <iostream>

#define OFFSET 100

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x1, x2, y1, y2, arr[201][201] = {}, cnt = 1;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;

        //빨강 +, 파랑 -

        for(int j = x1; j < x2; j++)
        {
            for(int k = y1; k < y2; k++)
            {
                if(i % 2 == 0)
                {
                    arr[j][k] += cnt++;
                }
                else
                {
                    arr[j][k] -= cnt++;
                }                
            }
        }
    }

    int sum = 0;
    
    for(int i = 0; i < 201; i++)
    {
        for(int j = 0; j < 201; j++)
        {
            if(arr[i][j] < 0)
                sum++;
        }
    }

    cout << sum;

    return 0;
}