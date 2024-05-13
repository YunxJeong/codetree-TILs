#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], esum = 0, osum = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        
        if((i + 1) % 2 == 0)
            esum += a[i];
        else
            osum += a[i];
    }

    if(osum > esum)
        cout << osum - esum;
    else
        cout << esum - osum;

    return 0;
}