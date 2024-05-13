#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int f, s;

    cin >> f >> s;

    cout << f << " " << s << " ";
    for(int i = 0; i < 8; i++)
    {
        int tmp = (f + s) % 10;
        f = s;
        s = tmp;

        cout << tmp << " ";
    }

    return 0;
}