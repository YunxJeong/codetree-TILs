#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num, min = 1000, max = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> num;

        if(num < 500)
        {
            if(num > max)
                max = num;
        }
        else
        {
            if(num < min)
                min = num;
        }
    }

    cout << max << " " << min;

    return 0;
}