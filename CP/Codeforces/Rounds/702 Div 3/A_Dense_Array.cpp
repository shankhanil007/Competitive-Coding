#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define pb push_back
#define F first
#define S second
#define mp make_pair
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define deb(x) cout << #x << " : " << x << "\n";
#define debug(x, y) cout << #x << " : " << x << "\t" << #y << " : " << y << "\n";
#define mod 1000000007
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, n) for (i = 1; i <= n; i++)
#define fok(i, k, n) for (i = k; i <= n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;
    for (int w = 1; w <= q; w++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            int a = arr[i];
            int b = arr[i - 1];
            int sm = min(a, b);
            int big = max(a, b);
            int d = big % sm == 0 ? big / sm : big / sm + 1;
            if (d <= 2)
            {
                continue;
            }
            else
            {
                int lim = sm * 2;
                while (true)
                {
                    int x = big % 2 == 0 ? big / 2 : big / 2 + 1;
                    count++;
                    if (x <= lim)
                    {
                        break;
                    }
                    big = x;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
