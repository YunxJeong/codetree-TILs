#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    int num, a[4] = {};

    for(int i = 0; i < 3; i++)
    {
        cin >> c >> num;

        if(c == 'Y')
        {
            if(num >= 37)
                a[0]++;
            else
                a[2]++;
        }
            
        else
            if(num >= 37)
                a[1]++;
            else
                a[3]++;
    }

    for(int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }

    if(a[0] >= 2)
        cout << "E";
        
    return 0;
}