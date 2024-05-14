#include <iostream>
using namespace std;

class User
{
public:
    char name;
    int score;

    User(char name = 'A', int score = 100)
    {
        this->name = name;
        this->score = score;
    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    User users[5];
    int min = 100, idx;

    for(int i = 0; i < 5; i++)
    {
        char name;
        int score;

        cin >> name >> score;
        users[i] = User(name, score);

        if(users[i].score < min)
        {
            idx = i;
            min = users[i].score;
        }    
    }

    cout << users[idx].name << " " << users[idx].score;


    
    return 0;
}