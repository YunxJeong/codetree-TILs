#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num[1000], max = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(num[j] - num[i] > max)
            max = num[j] - num[i];
        }
    }

    cout << max;

    return 0;
}