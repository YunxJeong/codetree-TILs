#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num, min = 999, max = -999;

    while(1)
    {
        cin >> num;

        if(num == 999 || num == -999)
            break;

        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }

    cout << max << " " << min;
    
    return 0;
}