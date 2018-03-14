#include <iostream>

using namespace std;

string twoStrings(string s1, string s2)
{
    int arr1[26] = {0, }, arr2[26] = {0, };

    for(int i=0; i<s1.length(); i++)
        arr1[s1.at(i)-97]++;
    for(int i=0; i<s2.length(); i++)
        arr2[s2.at(i)-97]++;

    for(int i=0; i<26; i++)
        if(arr1[i]!=0 && arr2[i]!=0 && arr1[i]<=arr2[i])
            return "YES";
    return "NO";
}

int main(void)
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s1, s2, result;
        cin >> s1 >> s2;
        
        result = twoStrings(s1, s2);
        cout << result << endl;
    }

    return 0;
}
