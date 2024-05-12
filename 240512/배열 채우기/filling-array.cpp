#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], i = 0;

    for(i; i < 10; i++)
    {
        cin >> a[i];

        if(a[i] == 0)
            break;
    }

    for(i; i > 0; i--)
    {
        cout << a[i - 1] << " ";
    }

    return 0;
}