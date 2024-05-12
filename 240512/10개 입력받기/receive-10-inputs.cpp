#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], sum = 0,i = 0;

    for(i; i < 10; i++)
    {
        cin >> a[i];

        if(a[i] == 0)
            break;
        
        sum += a[i];
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (double)sum / i;

    return 0;
}