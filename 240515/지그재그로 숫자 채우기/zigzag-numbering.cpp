#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, num = 0;

    cin >> n >> m;

    int a[n][m] = {};

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            {
                for(int j = 0; j < m; j++)
                {
                    a[j][i] = num;
                    num++;
                }
            }
        else
            {
                for(int k = m - 1; k >= 0; k--)
                {
                    a[k][i] = num;
                    num++;
                }
            }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}