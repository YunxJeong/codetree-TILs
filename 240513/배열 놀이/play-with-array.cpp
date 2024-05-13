#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q, a[100];

    cin >> n >> q;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int s, n1, n2; 
    for(int i = 0; i < q; i++)
    {
        cin >> s;
        
        if(s == 1)
        {
            cin >> n1;
            cout << a[n1] << endl;
        }
        else if(s == 2)
        {
            cin >> n1;

            int idx = 101;

            for(int j = 1; j <= n; j++)
            {
                if(a[j] == n1)
                {
                    if(idx > j)
                        idx = j;
                }
            }

            if(idx < 101)
                cout << idx << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            cin >> n1 >> n2;

            for(int j = n1; j <= n2; j++)
            {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}