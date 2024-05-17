#include <iostream>

#define OFFSET 1000

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, x2, y1, y2, arr[2001][2001] = {};

    for(int i = 0; i < 2; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
    
        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;

        for(int k = x1; k < x2; k++)
        {
            for(int j = y1; j < y2; j++)
            {
                if(i == 0)
                    arr[k][j]++;
                else
                {
                    arr[k][j]--;
                }
            }
        }
    }

    int xmin = 2000, ymin = 2000, xmax = 0, ymax = 0, cnt = 0;

    for(int i = 0; i < 2001; i++)
    {
        for(int j = 0; j < 2001; j++)
        {
            if(arr[i][j] == 1)
            {
                cnt++;

                if(i < xmin)
                    xmin = i;
                if(i > xmax)
                    xmax = i;
                if(j < ymin)
                    ymin = j;
                if(j > ymax)
                    ymax = j;
            }
        }
    }
    
    cout << (cnt == 0 ? cnt : (xmax + 1 - xmin) * (ymax + 1 - ymin));

    return 0;
}