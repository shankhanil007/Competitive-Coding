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
        int n, d;
        cin >> n >> d;
        int last_dig[10];
        for (int i = 1; i <= 10; i++)
        {
            last_dig[i - 1] = (d * i) % 10;
        }
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            ll copy = arr[i];
            int flag = 0;
            while (copy != 0)
            {
                int dig = copy % 10;
                if (dig == d)
                {
                    flag = 1;
                    break;
                }
                copy /= 10;
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                int dig = arr[i] % 10;
                int index = -1;
                flag = 0;
                for (int i = 0; i < 10; i++)
                {
                    if (dig == last_dig[i])
                    {
                        flag = 1;
                        index = i + 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    ll z = d * 10 + dig;
                    if (z > arr[i])
                    {
                        cout << "NO" << endl;
                    }
                    else
                    {
                        z = arr[i] - z;
                        if (z % 10 == 0)
                        {
                            cout << "YES" << endl;
                        }
                        else
                        {
                            cout << "NO" << endl;
                        }
                    }
                }
                else
                {
                    ll new_no = d * index;
                    if (new_no > arr[i])
                    {
                        cout << "NO" << endl;
                    }
                    else
                    {
                        cout << "YES" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
