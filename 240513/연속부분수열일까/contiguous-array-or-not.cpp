#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2, a1[100], a2[100];

    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    for(int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    int cnt = 0;

    for(int i = 0; i < n1; i++)
    {
        if(a1[i] == a2[0])
        {
            cnt++;
            for(int j = 1; j < n2; j++)
            {
                if(a1[i + j] == a2[j])
                    cnt++;
                else
                {
                    cnt = 0;
                    break;
                }
            }
        }
    }

    if(cnt != 0)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}