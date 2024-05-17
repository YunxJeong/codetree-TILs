#include <iostream>
#include <string>

using namespace std;

//num = num * 2 + binary[i]

int main() {
    int num, arr[8], cnt = 0;

    cin >> num;

    while(num > 0)
    {
        arr[cnt] = num % 10;
        num /= 10;
        cnt++;
    }
    
    for(int i = cnt - 1; i >= 0; i--)
    {
        num = num * 2 + arr[i];
    }

    cout << num;
    
    return 0;
}