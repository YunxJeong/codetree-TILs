#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[200] = {}, a, b;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;

        a += 100;
        b += 100;

        for(int j = a; j < b; j++)
        {
            arr[j]++;   
        }
    }

    int max = 0;

    for(int i = 0; i < 200; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    cout << max;
    
    return 0;
}