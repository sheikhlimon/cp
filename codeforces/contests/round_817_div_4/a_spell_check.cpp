#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int t;
    cin >> t;
    int n;
    cin >> n;
    string s[n];
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == "T" && s[i] == "m" && s[i] == "u" && s[i] == "r" && s[i] == "i")
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }

    return 0;
}