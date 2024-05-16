#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int a[100] = {}, cnt = 0;

    while(1)
    {
        if(n < 2)
        {
            a[cnt++] = n;
            break;
        }

        a[cnt++] = n % 2;
        n /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--)
    {
        cout << a[i];
    }

    return 0;
}