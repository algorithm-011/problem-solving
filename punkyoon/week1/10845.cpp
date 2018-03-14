#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int cmd_cnt;
    queue<int> q;
    cin >> cmd_cnt;

    for(int i=0; i<cmd_cnt; i++)
    {
        string cmd;
        cin >> cmd;
        if(!cmd.compare("push"))
        {
            int val;
            cin >> val;
            q.push(val);
        }

        else if(!cmd.compare("pop"))
        {
            if(q.empty())
                cout << -1 << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if(!cmd.compare("front"))
        {
            if(q.empty())
                cout << -1 << endl;
            else
                cout << q.front() << endl;
        }
        else if(!cmd.compare("back"))
        {
            if(q.empty())
                cout << -1 << endl;
            else
                cout << q.back() << endl;
        }
        else if(!cmd.compare("size"))
            cout << q.size() << endl;
        // empty
        else
            cout << q.empty() << endl;
    }
    
    return 0;
}
