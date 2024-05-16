#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h1, m1, h2, m2;

    cin >> h1 >> m1 >> h2 >> m2;

    cout << 60 * (h2 - h1) + m2 - m1;
    
    return 0;
}