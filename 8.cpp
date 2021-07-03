#include <bits\stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int result[t], j = 0;
    while (t--)
    {
        int a, b, n, sum = 0;
        cin >> a >> b >> n;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a + (i * b);
        }
        result[j++] = sum;
    }
    for (int i = 0; i < j; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
