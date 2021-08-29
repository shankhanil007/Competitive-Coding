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
    for (int r = 1; r <= q; r++)
    {
        int n;
        cin >> n;
        int w[n];
        int l[n];
        int copy[n];
        map<int, int> opos;
        map<int, int> len;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            copy[i] = w[i];
            opos[w[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            int no;
            cin >> no;
            len[w[i]] = no;
        }
        sort(copy, copy + n);
        map<int, int> fpos;
        fpos[copy[0]] = opos[copy[0]];
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            while (opos[copy[i]] <= fpos[copy[i - 1]])
            {
                opos[copy[i]] += len[copy[i]];
                count++;
            }
            fpos[copy[i]] = opos[copy[i]];
        }
        cout << count << endl;
    }

    return 0;
}
