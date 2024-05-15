#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;

    cin >> N;

    int a[N * 2];

    for(int i = 0; i < 2 * N; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 2*N);

    int max = 0;

    for(int i = 0; i < N; i++)
    {
        if((a[i] + a[2 * N - i - 1]) > max)
            max = a[i] + a[2 * N - i - 1];
    }

    cout << max;

    return 0;
}