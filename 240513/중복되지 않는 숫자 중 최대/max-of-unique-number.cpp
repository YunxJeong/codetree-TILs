#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, num[1000], a[1001] = {}, max = -1;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> num[i];

        a[num[i]]++;
    }

    for(int i = N - 1; i >= 0; i--)
    {
        if(a[num[i]] == 1)
        {
            cout << num[i];
            break;
        }

        if(i == 0)
            cout << -1;
    }

    return 0;
}