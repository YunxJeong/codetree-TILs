#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, y1, x2, y2, arr[2001][2001] = {}, cnt = 0;
    
    for(int i = 0; i < 3; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        if(i == 2)
        {
            for(int j = x1; j < x2; j++)
            {
                for(int k = y1; k < y2; k++)
                {
                    if(arr[j][k] != 0)
                    {
                        arr[j][k] = 0;
                        cnt--;
                    }
                }
            }
        }
        else
        {
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
    }

    cout << cnt;

    return 0;
}