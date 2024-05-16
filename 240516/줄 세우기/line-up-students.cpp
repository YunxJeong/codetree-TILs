#include <iostream>
#include <algorithm>

using namespace std;

class User
{
    public:
        int h, w, num;
    User(int h = 0, int w = 0, int num = 1)
    {
        this->h = h;
        this->w = w;
        this->num = num;
    }
};

bool cmp(User a, User b)
{
    if(a.h == b.h)
    {
        if(a.w == b.w)
        {
            return a.num < b.num;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, h, w, num = 1;

    cin >> n;

    User users[n];

    for(int i = 0; i < n; i++)
    {
        cin >> h >> w;
        
        users[i] = User(h, w, num);
        num++;
    }

    sort(users, users + n, cmp);
    
    for(int i = 0; i < n; i++)
    {
        cout << users[i].h << " " << users[i].w << " " << users[i].num << endl;
    }

    return 0;
}