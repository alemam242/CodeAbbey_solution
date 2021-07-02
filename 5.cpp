#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c, minimum[n], min;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a < b && a < c)
        {
            min = a;
        }
        else if (b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
        minimum[i] = min;
    }
    for (int i = 0; i < n; i++)
    {
        cout << minimum[i] << endl;
    }
    return 0;
}