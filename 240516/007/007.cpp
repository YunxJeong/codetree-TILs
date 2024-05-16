#include <iostream>
#include <string>

using namespace std;

class User 
{
    public :
        string code;
        char point;
        int time;

    User(string code, char point, int time)
    {
        this->code = code;
        this->point = point;
        this->time = time;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    User user = User("u", 'A', 0);

    cin >> user.code >> user.point >> user.time;

    cout << "secret code : " << user.code << endl;
    cout << "meeting point : " << user.point << endl;
    cout << "time : " << user.time << endl;

    return 0;
}