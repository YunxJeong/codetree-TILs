#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a[10];

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for(int i = 9; i >= 0; i--)
    {
        cout << a[i];
    }
    
    return 0;
}