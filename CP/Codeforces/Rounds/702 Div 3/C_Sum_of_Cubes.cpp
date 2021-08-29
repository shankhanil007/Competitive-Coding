#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
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
        ll no;
        cin >> no;
        int flag = 0;
        for (ll i = 1; i * i * i < no; i++)
        {
            ll rem = no - i * i * i;
            if (rem <= 0)
            {
                break;
            }
            ll root = cbrtl(rem);
            while (root * root * root < rem)
                root++;
            while (root * root * root > rem)
                root--;
            if (root * root * root == rem)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
