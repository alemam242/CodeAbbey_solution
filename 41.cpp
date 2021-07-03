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
        int a, b, c;
        int mid;
        cin >> a >> b >> c;
        if ((a < b && b < c) || (c < b && b < a))
        {
            mid = b;
        }
        else if ((b < a && a < c) || (c < a && a < b))
        {
            mid = a;
        }
        else
        {
            mid = c;
        }
        result[j++] = mid;
    }
    for (int i = 0; i < j; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
