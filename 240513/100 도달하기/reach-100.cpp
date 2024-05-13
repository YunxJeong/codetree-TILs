#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, f = 1, sum;

    cin >> n;

    cout << f << " " << n << " ";

    while(sum <= 100)
    {
        sum = n + f;
        
        f = n;
        n = sum;

        cout << sum << " ";
    }

    return 0;
}