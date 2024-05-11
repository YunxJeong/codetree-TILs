#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    char ca, cb, cc;

    cin >> ca >> a >> cb >> b >> cc >> c;

    if(ca == 'Y' && a >= 37) 
    {
        if((cb == 'Y' && b >= 37)||(cc == 'Y' && c >= 37)) cout << "E";
        else cout << "N";
    }
    else
    {
        if((cb == 'Y' && b >= 37)&&(cc == 'Y' && c >= 37)) cout << "E";
        else cout << "N";
    }

    return 0;
}