#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c[10];

    for(int i = 1; i <= 10; i++)
    {
        cin >> c[i];

        if(i == 2 || i == 5 || i == 8)
            cout << c[i] << " ";
    }

    return 0;
}