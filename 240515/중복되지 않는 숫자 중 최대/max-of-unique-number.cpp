#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, num, a[1000] = {}, answer[1000] = {}, max = 0, cnt;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 0, j = 0; i < N; i++)
    {
        if(a[i] == answer[j])
        {
            answer[j] = -1;
            continue;
        }
        else
        {
            answer[j] = a[i];
            j++;
        }

        cnt = j;
    }

    for(int i = 0; i < cnt; i++)
    {
        if(answer[i] > max)
            max = answer[i];
    }

    cout << max;

    return 0;
}