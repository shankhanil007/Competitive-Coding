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
        int rounds;
        cin >> rounds;
        int x, y;
        cin >> x >> y;
        int ish[x];
        int kunal[y];
        for (int i = 0; i < x; i++)
        {
            cin >> ish[i];
        }
        for (int i = 0; i < y; i++)
        {
            cin >> kunal[i];
        }
        int ci = 0, ck = 0;
        for (int i = 0; i < rounds; i++)
        {
            int a = ish[i % x];

            int b = kunal[i % y];
            int d = abs(a - b);
            int copy = d;
            int flag1 = 0;
            int flag2 = 0;
            int sum = 0;
            while (d != 0)
            {
                sum += d % 10;
                d /= 10;
            }
            if (sum % 3 == 0)
            {
                flag1 = 1;
            }
            d = copy;
            if (d % 10 == 0 || d % 10 == 5)
            {
                flag2 = 1;
            }
            if (flag1 == 1 && flag2 == 0)
            {
                ci++;
            }
            else if (flag1 == 0 && flag2 == 1)
            {
                ck++;
            }
        }
        cout << abs(ci - ck) << endl;
    }

    return 0;
}
