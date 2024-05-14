#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num[10], cal, min = 100;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            cal = num[i] - num[j];

            if(cal < 0)
                cal = -cal;
            
            if(cal < min)
                min = cal;
        }
    }

    cout << min;
    
    return 0;
}