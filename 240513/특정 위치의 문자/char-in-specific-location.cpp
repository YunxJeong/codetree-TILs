#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    char c;

    cin >> c;

    int idx = -1;

    for(int i = 0; i < 6; i++)
    {
        if(a[i] == c)
        {
            idx = i;
        }
    }

    if(idx != -1)
    {
        cout << idx;
    }
    else
        cout << "None";

    return 0;
}