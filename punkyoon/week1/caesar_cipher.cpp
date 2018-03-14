#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, k;
    string s;

    cin >> n >> s >> k;

    for(int i=0; i<s.length(); i++)
    {
        if(isupper(s.at(i)))
            s.at(i) = ((s.at(i) + k - 65) % 26) + 65;
        else if(islower(s.at(i)))
            s.at(i) = ((s.at(i) + k - 97) % 26) + 97;
    }
    cout << s << endl;

    return 0;
}
