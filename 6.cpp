#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, div;
    int n;
    cin >> n;
    double rslt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        div = a / b;
        rslt[i] = round(div);
    }
    for (int i = 0; i < n; i++)
    {
        cout << rslt[i] << " ";
    }
    return 0;
}