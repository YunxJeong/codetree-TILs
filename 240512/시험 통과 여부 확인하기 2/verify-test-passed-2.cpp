#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score[4], n, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int sum = 0;

        for(int j = 0; j < 4; j++)
        {
            cin >> score[j];
            sum += score[j];
        }
        double avg = (double)sum / 4;
    
        if(avg >= 60)
        {
            cnt++;
            cout << "pass" << endl;
        }
        else
            cout << "fail" << endl;
    }

    cout << cnt;
    return 0;
}