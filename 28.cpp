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
        double a, b;
        cin >> a >> b;
        double bmi = a / (b * b);
        if (bmi < 18.5)
        {
            result[j++] = 1;
        }
        else if (bmi >= 18.5 && bmi < 25.0)
        {
            result[j++] = 2;
        }
        else if (bmi >= 25.0 && bmi < 30.0)
        {
            result[j++] = 3;
        }
        else
        {
            result[j++] = 4;
        }
    }
    for (int i = 0; i < j; i++)
    {
        if (result[i] == 1)
        {
            cout << "under ";
        }
        else if (result[i] == 2)
        {
            cout << "normal ";
        }
        else if (result[i] == 3)
        {
            cout << "over ";
        }
        else
        {
            cout << "obese ";
        }
    }
    return 0;
}
