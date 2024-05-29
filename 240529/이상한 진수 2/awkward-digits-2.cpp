#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


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
    // 여기에 코드를 작성해주세요.
    int M = 0;
    string n, str;

    cin >> n;

    for(int i = 0; i < n.length(); i++)
    {
        str = n;

        if(n[i] == '0')
            str[i] = '1';
        else
            str[i] = '0';
        
        M = max(M, todec(str));
    }

    cout << M;
    
    return 0;
}