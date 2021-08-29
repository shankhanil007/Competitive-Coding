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
        string arr[n];
        map<string, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]] = 1;
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string a = arr[i];
                string b = arr[j];
                string c = b[0] + a.substr(1, a.size());
                string d = a[0] + b.substr(1, b.size());
                if (map[c] == 1 || map[d] == 1)
                {
                }
                else
                {
                    count++;
                }
            }
        }
        cout << count * 2 << endl;
    }

    return 0;
}
