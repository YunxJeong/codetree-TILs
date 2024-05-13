#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num, a[10] = {};

    do
    {
        cin >> num;

        if(num > 9)
        {
            a[num / 10]++;
        }
    }
    while(num > 0);

    for(int i = 1; i < 10; i++)
    {
        cout << i << " - " << a[i] << endl;
    }

    return 0;
}