/**
 * Author: iamsiamhossen
 * Created: 04-02-2025 22:39:17
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define all(X) (X).begin(), (X).end()
#define Reverse(X) reverse(All(X))
#define Unique(X) (X).erase(unique((X).begin(), (X).end()), (X).end())
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
// MOD
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF 1001001001
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = k, t = n, x = 0;
    c--;
    int ans = 0;
    if (n == k)
    {
        x = 1;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] == x)
            {
                x++;
            }
            else
            {
                cout << x << endl;
                return;
            }
        }
        x--;
        if (n / 2 == x)
        {
            cout << x + 1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    else
    {
        if (count(a.begin() + 1, a.begin() + (n - k + 2), 1) == n - k + 1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
int32_t main()
{
    fastread();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}