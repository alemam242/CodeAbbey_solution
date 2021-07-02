#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], sum[n], min;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] < b[i])
        {
            min = a[i];
        }
        else
        {
            min = b[i];
        }
        sum[i] = min;
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}