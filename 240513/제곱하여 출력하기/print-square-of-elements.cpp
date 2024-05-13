#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a[100];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] *= a[i];

        cout << a[i] << " ";
    }
    
    return 0;
}