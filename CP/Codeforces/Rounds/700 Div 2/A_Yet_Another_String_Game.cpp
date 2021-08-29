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
        string st;
        cin >> st;
        char arr[26];
        int x = 0;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            arr[x] = ch;
            x++;
        }

        for (int i = 0; i < st.length(); i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (st[i] != arr[j])
                    {
                        cout << arr[j];
                        break;
                    }
                }
            }
            else
            {
                for (int j = 25; j >= 0; j--)
                {
                    if (st[i] != arr[j])
                    {
                        cout << arr[j];
                        break;
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}
