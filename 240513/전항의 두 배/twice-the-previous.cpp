#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a1, a2, a3;

    cin >> a1 >> a2;

    cout << a1 << " " << a2 << " ";

    for(int i = 0; i < 8; i++)
    {
        a3 = 2*a1 + a2;
        a1 = a2;
        a2 = a3;

        cout << a3 << " ";
    }
    
    return 0;
}