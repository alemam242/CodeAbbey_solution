#include <bits\stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    int var, rslt[n];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        cin >> a >> b >> c;
        int digit = a * b + c;
        while (digit > 0)
        {
            var = digit % 10;
            sum = sum + var;
            digit = digit / 10;
        }
        rslt[i] = sum;
    }
    for (int i = 0; i < n; i++)
    {
        cout << rslt[i] << " ";
    }

    return 0;
}
