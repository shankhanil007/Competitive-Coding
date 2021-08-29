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

    string st;
    cin >> st;
    map<char, int> map;
    int flag = 0;
    for (int i = 0; i < st.length(); i++)
    {
        char ch = st[i];
        if (ch >= 97 && ch <= 122)
            map[ch]++;
        else
        {
            cout << "The string is invalid" << endl;
            return 0;
        }
    }

    set<int> s;
    for (auto i : map)
    {
        s.insert(i.second);
    }

    if (s.size() == 1)
    {
    }

    else if (s.size() > 2)
    {
        cout << "The string is invalid" << endl;
    }

    else
    {
        set<int, greater<int>>::iterator itr;
        int arr[2];
        int x = 0;
        for (itr = s.begin(); itr != s.end(); itr++)
        {
            arr[x] = *itr;
            x++;
        }
        sort(arr, arr + 2);
        std::map<int, int> freq;
        for (auto i : map)
        {
            freq[i.second]++;
        }
        if (arr[1] - arr[0] == 1 && freq[arr[1]] == 1)
        {
            for (auto i : map)
            {
                if (i.second != arr[1])
                {
                    for (int k = 0; k < i.second; k++)
                    {
                        cout << i.first;
                    }
                }
                else
                {
                    for (int k = 0; k < i.second - 1; k++)
                    {
                        cout << i.first;
                    }
                }
            }
        }
        else if (arr[0] == 1 && freq[arr[0]] == 1)
        {
            for (auto i : map)
            {
                if (i.second != arr[0])
                {
                    for (int k = 0; k < i.second; k++)
                    {
                        cout << i.first;
                    }
                }
            }
        }

        else
        {
            cout << "The string is invalid" << endl;
        }
    }

    return 0;
}
