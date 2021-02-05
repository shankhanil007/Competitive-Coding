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
        int n, k;
        cin >> n >> k;
        ll arr[n];
        ll max = INT_MIN;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i >= 1)
            {
                ll sum = arr[0];
                ll y = (sum * k);
                ll x = arr[i] * 100;
                max = std::max(max, abs(y - x));
            }
            sum += arr[i];
        }

        ll l = 0, h = max;
        ll ans = 0;
        while (l <= h)
        {
            ll mid = (l + h) / 2;
            // cout << mid << endl;
            sum = arr[0] + mid;
            int flag = 0;
            for (int i = 1; i < n; i++)
            {
                ll y = (sum * k);

                if ((arr[i] * 100) <= y)
                {
                    sum += arr[i];
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
