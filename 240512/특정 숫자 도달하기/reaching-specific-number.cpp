#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], i = 0, sum = 0;

    for(i; i < 10; i++)
    {
        cin >> a[i];

        if(a[i] >= 250)
            break;
        else
            sum += a[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / i;

    return 0;
}