#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int sum = 0;

    cin >> str;

    for(int i = 0; i < str.length() - 1; i++)
    {
        for(int j = i + 1; j < str.length(); j++)
        {
            if(str[i] != '(')
                break;
            else
            {
                if(str[j] == ')')
                    sum++;
            }
        }
    }

    cout << sum;

    return 0;
}