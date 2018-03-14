#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    int n;
    deque<pair<int, int>> q;
    pair<int, int> temp;

    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int val;
        cin >> val;
        q.push_back({i, val});
    }

    temp = q.front();
    q.pop_front();
    cout << temp.first << " ";
    while(!q.empty())
    {
        int cnt = 0;
        if(temp.second > 0)
        {
            while(++cnt < temp.second)
            {
                pair<int, int> t = q.front();
                q.pop_front();
                q.push_back(t);
            }
            temp = q.front();
            q.pop_front();
        }
        else
        {
            while(--cnt > temp.second)
            {
                pair<int, int> t = q.back();
                q.pop_back();
                q.push_front(t);
            }
            temp = q.back();
            q.pop_back();
        }
        cout << temp.first << " ";
    }

    cout << endl;
    return 0;
}
