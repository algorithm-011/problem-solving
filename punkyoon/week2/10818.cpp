#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, *arr;
    cin >> n;
    arr = new int[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << arr[0] << " " << arr[n-1] << endl;

    for(int i=0;i<n;i++)
        cout << arr[i]<<" ";
    cout << endl;

    delete[] arr;
    return 0;
}
