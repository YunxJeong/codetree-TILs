#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;

        if(num == 2)
            cnt++;
        if(cnt == 3)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}