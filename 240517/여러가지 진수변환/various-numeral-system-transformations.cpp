#include <iostream>

using namespace std;

int main() {
    int n, b, arr[1000], cnt = 0;

    cin >> n >> b;

    while(1)
    {
        if(n < b)
        {
            arr[cnt++] = n;
            break;
        }

        arr[cnt++] = n % b;
        n /= b;
    }

    for(int i = cnt - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}