#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100], i = 0, sum = 0;

    for(i; i < 100; i++)
    {
        cin >> a[i];

        if(a[i] == 0)
            break;
    }

    for(int j = 0; j < 3; j++)
    {
        sum += a[i - 1];
        i--;
    }

    cout << sum;

    return 0;
}