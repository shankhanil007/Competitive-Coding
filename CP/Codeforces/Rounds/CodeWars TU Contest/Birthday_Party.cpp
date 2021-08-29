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

    int a, x, y, z;
    cin >> a >> x >> y >> z;
    int p[x], q[y], r[z];
    for (int i = 0; i < x; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < y; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < z; i++)
    {
        cin >> r[i];
    }

    sort(p, p + x);
    sort(q, q + y);
    sort(r, r + z);

    int min = std::min(x, y);
    int min = std::min(min, z);

    if (p[0] + q[0] + r[0] > a)
    {
        cout << "-1" << endl;
    }

    else
    {
        int sum = 0;
        for (int i = 1; i < min; i++)
        {
        }
    }

    else
    {
        int cost = p[0] + q[0] + r[0];
        for (int i = 1; i < x; i++)
        {
            cost -= p[0];
            cost += p[i];
            if (cost <= a)
            {
            }
        }
    }

    return 0;
}
