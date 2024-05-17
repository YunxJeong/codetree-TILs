#include <iostream>
#include <string>

using namespace std;

#include <iostream>

using namespace std;

int tobin(int n) {
    int a[100] = {}, cnt = 0;

    while(1)
    {
        if(n < 2)
        {
            a[cnt++] = n;
            break;
        }

        a[cnt++] = n % 2;
        n /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--)
    {
        cout << a[i];
    }

    return 0;
}

int todec(string bin)
{
    int num = 0;
    for(int i = 0; i < bin.size(); i++)
    {
        num = num * 2 + (bin[i] - '0');
    }
    
    return num;
}

int main() {
    string n;
    
    cin >> n;

    tobin(todec(n) * 17);
    
    return 0;
}