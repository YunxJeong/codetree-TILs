#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int A[n], B[n];

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    sort(A, A + n);
    sort(B, B + n);

    int flag = 1;
    
    for(int i = 0; i < n; i++)
    {
        if(A[i] != B[i])
            flag = -1;
    }

    cout << (flag == 1 ? "Yes" : "No");

    return 0;
}