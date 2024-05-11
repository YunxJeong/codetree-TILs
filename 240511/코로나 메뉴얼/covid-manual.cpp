#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, cnt = 0;
    char ca, cb, cc;

    cin >> ca >> a >> cb >> b >> cc >> c;

    if(ca == 'Y' && a >= 37) cnt++;
    if(cb == 'Y' && b >= 37) cnt++;
    if(cc == 'Y' && c >= 37) cnt++;
    
    if(cnt>=2) cout<<"E";
    else cout<<"N";

    return 0;
}