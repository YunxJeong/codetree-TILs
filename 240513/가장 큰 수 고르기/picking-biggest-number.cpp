#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int max = 1, n;

    for(int i = 0; i < 10; i++)
    {
        cin >> n;
        if(n > max)
            max = n;
    }

    cout << max;
    
    return 0;
}