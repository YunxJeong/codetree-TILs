#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[2][4];
    double total = 0;

    cout << fixed;
    cout.precision(1);

    for(int i = 0; i < 2; i++)
    {
        double sum = 0;

        for(int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        cout << sum / 4 << " ";
        total += sum;
    }

    cout << endl;

    for(int i = 0; i < 4; i++)
    {
        double sum = 0;

        for(int j = 0; j < 2; j++)
        {
            sum += a[j][i];
        }
        cout << sum / 2 << " ";
    }
    cout << "\n" << total / 8;

    return 0;
}