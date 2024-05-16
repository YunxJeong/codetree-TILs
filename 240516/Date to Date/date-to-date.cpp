#include <iostream>

using namespace std;

int days(int m, int d)
{
    int sum = d - 1;

    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(m - 1 > 0)
    {
        sum += day[m - 1];
        m--;  
    }
    
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2, a, b;

    cin >> m1 >> d1 >> m2 >> d2;

    int result = days(m2, d2) - days(m1, d1) + 1;

    //cout << (sum == 0 ? 1 : sum);

    cout << result;

    return 0;
}