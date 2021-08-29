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
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[n];
        int c[m];
        vector<pair<int, int>> diff;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != a[i])
            {
                diff.push_back(make_pair(a[i], b[i]));
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
        }

        int check = 0;
        for (int i = 0; i < diff.size(); i++)
        {
            int flag = 0;
            for (int j = 0; j < m; j++)
            {
                if (diff[i].second == c[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
