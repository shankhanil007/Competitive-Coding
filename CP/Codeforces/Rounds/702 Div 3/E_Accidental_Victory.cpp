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
        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++)
        {
            ll no;
            cin >> no;
            v.push_back({no, i + 1});
        }
        sort(v.begin(), v.end());
        ll prefix[n];
        prefix[0] = v[0].first;
        ll sum = v[0].first;
        for (int i = 1; i < n; i++)
        {
            sum += v[i].first;
            prefix[i] = sum;
        }

        // int l = 0, h = n - 1;
        // int idx = -1;
        // while(l<=h)
        // {
        //     int mid = (l+h)/2;
        //     if(prefix[mid]>=v[mid+1].first)
        //     {
        //         l++;
        //     }

        // }
        vector<ll> ans;
        for (int i = n - 2; i >= 0; i--)
        {
            if (prefix[i] >= v[i + 1].first)
            {
                ans.push_back(v[i].second);
                continue;
            }
            else
            {
                break;
            }
        }

        ans.push_back(v[n - 1].second);
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
