#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num = 1;

    cin >> n;

    int a[n][n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[j][i] = num;
            num++;
        }
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