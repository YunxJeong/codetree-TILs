#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, num[1000], max = 1, idx;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
        
        if(num[i] == max)
        {
            continue;
        }
        else if(num[i] > max)
        {
            max = num[i];
            idx = i;
        }
    }

    //cout << max << " " << idx;
        
    int newidx;

    while(idx > 0)
    {
        max = 0;

        cout << idx + 1 << " ";

        for(int i = 0;i < idx; i++)
        {
            if(num[i] == max)
            {
                continue;
            }
            else if(num[i] > max)
            {
                max = num[i];
                newidx = i;
            }
        }

        idx = newidx;
    }

    cout << 1;

    /*for(int i = idx; i > 0; i++)
    {
        cout << num[idx] << " ";

        for(int i = 0; i < idx; i++)
        {            
            if(num[i] == max)
            {
                if(idx > i)
                    idx = i;
            }
            else if(num[i] > max)
            {
                max = num[i];
                idx = i;
            }
        }
    }

    cout << 1 ;*/

    return 0;
}