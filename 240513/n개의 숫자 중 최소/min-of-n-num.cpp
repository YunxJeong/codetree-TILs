#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, num[100], min;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
        
        if(i == 0)
            min = num[0];

        if(min > num[i])
            min = num[i];
    }

    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        if(num[i] == min)
            cnt++;
    }

    cout << min << " " << cnt;
    
    return 0;
}