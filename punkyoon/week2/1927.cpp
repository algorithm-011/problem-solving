#include <iostream>

using namespace std;

int main(void)
{
    int n, cnt = 0, *arr;
    
    cin >> n;
    arr = new int[n];

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;

        if(x == 0)
        {
            cout << endl;
        }

    }

    delete[] arr;
    return 0;
}
