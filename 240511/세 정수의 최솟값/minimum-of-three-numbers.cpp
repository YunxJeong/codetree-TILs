#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, min = 0;

    cin >> a >> b >> c;

    (a<b)? min = a : min = b;
    
    if(min>c) min = c;

    cout << min;

    return 0;
}