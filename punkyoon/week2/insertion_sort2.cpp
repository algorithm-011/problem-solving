#include <iostream>
#include <vector>

using namespace std;

void print(int n, vector<int> vec)
{
    for(int i=0; i<n; i++)
        cout << vec[i] << " ";
    cout << endl;
}

void insertion_sort2(int n, vector<int> vec)
{
    for(int i=1; i<n; i++)
    {
        int temp, j;
        temp = vec[(j=i)];
        while(--j >= 0 && temp < vec[j])
        {
            vec[j+1] = vec[j];
            vec[j] = temp;
        }

        print(n, vec);
    }
}

int main(void)
{
    int n;
    vector<int> v;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    insertion_sort2(n, v);

    return 0;
}
