#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int a[n], b[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            sort(a, a + i);
            cout << a[i / 2] << " ";
        }
    }

    return 0;
}