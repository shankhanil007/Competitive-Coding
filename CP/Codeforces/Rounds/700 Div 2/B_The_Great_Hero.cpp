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

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

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
        ll hatk, hhlt;
        cin >> hatk >> hhlt >> n;
        ll atk[n];
        ll hlt[n];

        for (int i = 0; i < n; i++)
        {
            cin >> atk[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> hlt[i];
        }

        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({atk[i], hlt[i]});
        }
        sort(v.begin(), v.end(), compare);

        for (int i = 0; i < n; i++)
        {
            ll matk = v[i].first;
            ll mhlt = v[i].second;
            if (flag == 0)
            {
                ll fight_hero = mhlt % hatk == 0 ? mhlt / hatk : mhlt / hatk + 1;
                ll fight_monster = hhlt % matk == 0 ? hhlt / matk : hhlt / matk + 1;

                if (fight_monster < fight_hero)
                {
                    flag = 1;
                    hhlt -= matk * fight_monster;
                }
                else
                {
                    hhlt -= matk * fight_hero;
                    if (i < n - 1 && hhlt <= 0)
                    {
                        flag = 1;
                    }
                }
            }
        }
        // cout << hhlt << endl;
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // cout << hhlt << endl;
    }

    return 0;
}
