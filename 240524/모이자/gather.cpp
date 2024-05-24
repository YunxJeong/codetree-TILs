#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    int n, arr[100] = {}, m = INT_MAX;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int sum = 0;

        for(int j = 0; j < n; j++)
        {
            sum += abs(j - i) * arr[j];
        }
        m = min(m, sum);
    }
    
    cout << m;
    
    return 0;
}