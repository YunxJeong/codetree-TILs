#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a, b;

    cin >> a >> b;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    cout << (a == b ? "Yes" : "No");
    return 0;
}