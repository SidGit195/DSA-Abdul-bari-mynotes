#include <iostream>
using namespace std;

void ReverseArray(int a[], int n)
{
    int temp = 0;
    for (int i=0, t=n-1; i<=n/2; i++, t--)
    {
        temp = a[i];
        a[i] = a[t];
        a[t] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter size of an array" << endl;
    cin >> n;

    int a[n];
    cout << "Enter array with space" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ReverseArray(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}