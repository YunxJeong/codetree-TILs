#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], sum2 = 0, sum3 = 0, cnt = 0;

    for(int i = 1; i <= 10; i++)
    {
        cin >> a[i];
        if(i % 2 == 0)
            sum2 += a[i];
        if(i % 3 == 0)
        {
            sum3 += a[i];
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << sum2 << " " << (double)sum3 / cnt;

    return 0;
}