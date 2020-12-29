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
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, n) for (int i = 1; i <= n; i++)
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
        string st;
        cin >> st;
        stack<char> s1, s2, s3;
        int l = st.length();

        if (l % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int idx1 = -1;
        int idx2 = -1;
        for (int i = 0; i < l; i++)
        {

            if (st[i] == ')')
            {
                idx1 = i;
            }
            else if (st[i] == '(')
            {
                idx2 = i;
            }
        }

        if (idx1 == 0 || idx2 == l - 1)
        {
            cout << "NO" << endl;
            continue;
        }

        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
