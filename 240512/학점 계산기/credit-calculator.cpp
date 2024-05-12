#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    double sum = 0.0;

    cin >> n;

    double a[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << fixed;
    cout.precision(1);

    double avg = sum / n;
    cout << avg << endl;

    if(avg>= 4.0)
        cout << "Perfect";
    else if(avg >= 3.0)
        cout << "Good";
    else  
        cout << "Poor";
    return 0;
}