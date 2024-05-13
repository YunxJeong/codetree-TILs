#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> num;
        if(num % 2 == 0)
            cout << num << " ";
    }
    
    return 0;
}