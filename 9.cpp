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
        cin >> a >> b >> c;
        if (a + b > c && a + c > b && b + c > a)
        {
            result[j++] = 1;
        }
        else
        {
            result[j++] = 0;
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
