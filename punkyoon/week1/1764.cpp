#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    int n, m, cnt = 0;
    map<string, int> result;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        string name;
        cin >> name;
        result[name] = 0;
    }

    for(int i=0; i<m; i++)
    {
        string name;
        cin >> name;
        if(result.find(name) == result.end())
            result[name] = 0;
        else
        {
            result[name]++;
            cnt++;
        }
    }

    cout << cnt << endl;
    for(auto it=result.begin(); it!=result.end(); it++)
        if(it->second != 0)
            cout << it->first << endl;
    return 0;
}
