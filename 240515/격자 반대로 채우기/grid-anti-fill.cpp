#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int a[n][n], num = 1, cnt = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        if(cnt % 2 != 0)
        {
            for(int j = n - 1; j >= 0; j--)
            {
                a[j][i] = num;
                num++;   
            }
        }
        else
        {
            for(int j = 0; j < n; j++)
            {
                a[j][i] =  num;
                num++;
            }
        }

        cnt++;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}