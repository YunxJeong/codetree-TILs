#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;

    int arr[n][n] = {};

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int Mcnt = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 2; j++)
        {
            Mcnt = max(Mcnt, arr[i][j] + arr[i][j + 1] + arr[i][j + 2]);
        }
    }

    cout << Mcnt;
    
    return 0;
}