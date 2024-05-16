#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class User
{
    public:
        string name;
        int k, e, m;
    User(string name = "user", int k = 0, int e = 0, int m = 0)
    {
        this->name = name;
        this->k = k;
        this->e = e;
        this->m = m;
    }
};

bool cmp(User a, User b)
{
    return a.k + a.e + a.m < b.k + b.e + b.m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, e, m;
    string name;

    cin >> n;

    User users[n];

    for(int i = 0; i < n; i++)
    {
        cin >> name >> k >> e >> m;
        
        users[i] = User(name, k, e, m);
    }

    sort(users, users + n, cmp);
    
    for(int i = 0; i < n; i++)
    {
        cout << users[i].name << " " << users[i].k << " " << users[i].e << " " << users[i].m << endl;
    }


    return 0;
}