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
        ll d[2 * n];
        set<ll> s;
        map<ll, int> map;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> d[i];
            s.insert(d[i]);
            map[d[i]]++;
        }
        int check = 0;
        for (auto i : map)
        {
            if (i.second != 2)
            {
                check = 1;
                cout << "NO" << endl;
                break;
            }
        }

        if (check == 0)
        {
            vector<ll> v;
            set<ll, greater<ll>>::iterator itr;
            for (itr = s.begin(); itr != s.end(); itr++)
            {
                v.push_back(*itr);
            }

            sort(v.begin(), v.end());
            ll suffix = 0;
            int flag = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                ll x = (v[i] - suffix) % (2 * (i + 1)) == 0 ? (v[i] - suffix) / (2 * (i + 1)) : 0;
                // cout << x << endl;
                if (x > 0)
                {
                    suffix += 2 * x;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
