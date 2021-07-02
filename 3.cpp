#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}