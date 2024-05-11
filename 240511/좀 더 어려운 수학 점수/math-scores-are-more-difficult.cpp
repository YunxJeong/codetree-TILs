#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(a>c || (a==c && b>d) ) cout << "A";
    else cout << "B";

    return 0;
}