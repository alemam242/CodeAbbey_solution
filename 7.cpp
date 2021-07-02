#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double f, toC = 0;
    double rslt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f;
        toC = (f - 32) * 5 / 9;
        rslt[i] = round(toC);
    }
    for (int i = 0; i < n; i++)
    {
        cout << rslt[i] << " ";
    }

    return 0;
}