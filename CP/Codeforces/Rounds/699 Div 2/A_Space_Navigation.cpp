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
        int px, py;
        cin >> px >> py;
        string st;
        cin >> st;
        map<char, int> map;
        for (int i = 0; i < st.length(); i++)
        {
            char ch = st[i];
            map[ch]++;
        }

        int flag = 0;

        if (px > 0)
        {
            if (map['R'] < px)
            {
                flag = 1;
            }
        }

        if (px < 0)
        {
            if (map['L'] < abs(px))
            {
                flag = 1;
            }
        }

        if (py > 0)
        {
            if (map['U'] < py)
            {
                flag = 1;
            }
        }

        if (py < 0)
        {
            if (map['D'] < abs(py))
            {
                flag = 1;
            }
        }

        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
