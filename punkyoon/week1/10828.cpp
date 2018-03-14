#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int cmd_cnt;
    stack<int> stk;
    cin >> cmd_cnt;

    for(int i=0; i<cmd_cnt; i++)
    {
        string cmd;
        cin >> cmd;
        if(!cmd.compare("push"))
        {
            int val;
            cin >> val;
            stk.push(val);
        }

        else if(!cmd.compare("pop"))
        {
            if(stk.empty())
                cout << -1 << endl;
            else
            {
                cout << stk.top() << endl;
                stk.pop();
            }
        }
        else if(!cmd.compare("top"))
        {
            if(stk.empty())
                cout << -1 << endl;
            else
                cout << stk.top() << endl;
        }
        else if(!cmd.compare("size"))
            cout << stk.size() << endl;
        // empty
        else
            cout << stk.empty() << endl;
    }
    
    return 0;
}
