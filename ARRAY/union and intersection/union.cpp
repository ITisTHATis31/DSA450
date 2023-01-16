#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            s.insert(b[i]);
        }

        set<int>::iterator p;
        cout << "union array:";
        for (p = s.begin(); p != s.end(); p++){
            cout << (*p) << "--";
        }
        cout << endl;
        cout << "lenght:";
        return s.size();
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];
    Solution ob;
    cout << ob.doUnion(a, n, b, m) << endl;

    return 0;
}
