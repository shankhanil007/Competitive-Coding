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
    for (int l = 1; l <= q; l++)
    {
        int w, h, n;
        cin >> w >> h >> n;
        if (w % 2 == 1 && h % 2 == 1 && n != 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (w % 2 == 1 && h % 2 == 1 && n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        int count = 1;
        int flag = 0;
        while (w % 2 == 0)
        {
            count *= 2;
            w /= 2;
            if (count >= n)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            while (h % 2 == 0)
            {
                count *= 2;
                h /= 2;
                if (count >= n)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            continue;
        }
    }

    return 0;
}
