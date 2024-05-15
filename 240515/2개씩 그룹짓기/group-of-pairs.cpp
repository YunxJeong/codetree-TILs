#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;

    cin >> N;

    int a[N];

    for(int i = 0; i < 2 * N; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 2*N);

    cout << a[N - 1] + a[N];

    return 0;
}