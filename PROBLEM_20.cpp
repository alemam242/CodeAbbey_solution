#include <bits\stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int store[n];
    int j = 0;
    cin.ignore();
    while (n--)
    {
        char c[1000];
        gets(c);
        int len = strlen(c);
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (c[i] == 'a' || c[i] == 'e' || c[i] == 'o' || c[i] == 'u' || c[i] == 'i' || c[i] == 'y' ||
                c[i] == 'A' || c[i] == 'E' || c[i] == 'O' || c[i] == 'U' || c[i] == 'I' || c[i] == 'Y')
            {
                count++;
            }
        }
        store[j++] = count;
    }
    for (int i = 0; i < j; i++)
    {
        cout << store[i] << " ";
    }

    return 0;
}
