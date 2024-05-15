#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, k;

    cin >> N >> k;

    int a[N];

    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    sort(a, a + N);

    cout << a[k - 1];

    return 0;
}