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
        int arr[n];
        map<int, int> map;
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]] = i;
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        vector<pair<int, int>> v;
        v.push_back({map[max], n - 1});
        auto it = map.end();
        it--;
        it--;

        while (it != map.begin())
        {
            if (it->second > map[max])
            {
                it--;
                continue;
            }
            else
            {
                v.push_back({it->second, map[max] - 1});
                max = it->first;
                it--;
            }
        }
        if (it->second < map[max])
        {

            v.push_back({it->second, map[max] - 1});
            max = it->first;
            it--;
        }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }

        for (int i = 0; i < v.size(); i++)
        {
            for (int j = v[i].first; j <= v[i].second; j++)
            {
                // int pow = n - i;
                // int flag = 1;
                // for (int k = 1; k <= pow; k++)
                // {
                //     flag *= n;
                // }
                // sum += (flag)*arr[j];
                // i++;
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
