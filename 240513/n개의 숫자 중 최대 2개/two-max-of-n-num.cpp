#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100], n, tmp;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    cout << a[0] << " " << a[1];
    
    return 0;
}