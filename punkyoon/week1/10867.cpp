#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int n;
    set<int> st;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        st.insert(val);
    }

    for(auto i=st.begin(); i!=st.end(); i++)
        cout << *i << " ";
    cout << endl;
    return 0;
}
