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
        ll p, a, b, c;
        cin >> p >> a >> b >> c;

        if (p % a == 0 || p % b == 0 || p % c == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            ll min = LONG_LONG_MAX;
            ll div;
            div = p / a + 1;
            // cout << div << endl;
            ll diff = a * div - p;
            if (diff < min)
            {
                min = diff;
            }
            div = p / b + 1;
            diff = b * div - p;
            if (diff < min)
            {
                min = diff;
            }
            div = p / c + 1;
            diff = c * div - p;
            if (diff < min)
            {
                min = diff;
            }

            cout << min << endl;
        }
    }

    return 0;
}
