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
#define fok(i, k, n) for (int i = k; i <= n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;
    fo(w, q)
    {
        int n;
        cin >> n;
        vector<int> even;
        vector<int> odd;
        fo(i, n)
        {
            int no;
            cin >> no;
            if (no % 2 == 0)
                even.pb(no);
            else
            {
                odd.pb(no);
            }
        }
        ll a = 0, b = 0;
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        while (!even.empty() || !odd.empty())
        {
            if (!even.empty())
            {
                a += even[even.size() - 1];
                even.pop_back();
            }
            else if (!odd.empty())
            {
                odd.pop_back();
            }
            else
                break;

            if (!odd.empty())
            {
                b += odd[odd.size() - 1];
                odd.pop_back();
            }
            else if (!even.empty())
            {
                even.pop_back();
            }
            else
            {
                break;
            }

            //cout << a << " " << b << endl;
        }

        if (a > b)
            cout << "Alice" << endl;
        else if (a < b)
            cout << "Bob" << endl;
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
