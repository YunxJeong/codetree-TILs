#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, arr[10] = {};

    cin >> a >> b;

    while(a > 1)
    {
        arr[a % b]++;
        a = a / b;
    }

    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        sum += arr[i]*arr[i];
    }

    cout << sum;

    return 0;
}