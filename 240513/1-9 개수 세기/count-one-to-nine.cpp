#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num, a[10] = {};
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        a[num]++;
    }

    for(int i = 1; i < 10; i++)
        cout << a[i] << endl;
        
    return 0;
}