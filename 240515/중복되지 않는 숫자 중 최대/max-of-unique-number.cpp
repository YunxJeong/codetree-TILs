#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, a[1000] = {}, answer[1000] = {}, max = -1;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 0; i < N; i++)
    {
        //a[i] 현재 값

        if(max < a[i])
        {
            int cnt = 0;
            for(int j = 0; j < N; j++)  
            {
                if(a[j] == a[i])    //현재 값이 이전 값들과 같다면 cnt++
                    cnt++;
            }

            if(cnt  == 1)
            {
                max = a[i];
            }
        }
    }

    cout << max;

    return 0;
}