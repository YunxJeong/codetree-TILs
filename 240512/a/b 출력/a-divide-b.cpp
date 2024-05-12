#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, result = 0;

    cin >> a >> b;

    cout << a / b << ".";

    for(int i = 0; i < 20; i++)
    {
        a = a % b * 10;
    
        cout << a / b;
    }
    
    return 0;
}