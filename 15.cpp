#include <iostream>
using namespace std;
int main()
{
    int a[300];
    for (int i = 0; i < 300; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < 300; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << max << " " << min << endl;
    return 0;
}