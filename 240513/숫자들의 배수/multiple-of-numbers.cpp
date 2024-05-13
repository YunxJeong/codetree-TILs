#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0, a[100];

    cin >> n;

    for(int i = 1; i <= 100; i++)
    {
        a[i] = n * i;

        cout << a[i] << " ";

        if(a[i] % 5 == 0)
            cnt++;
        
        if(cnt == 2)
            break;
    }

    return 0;
}