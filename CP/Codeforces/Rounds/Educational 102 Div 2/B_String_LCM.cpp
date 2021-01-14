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

int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        /* For current index i, check for  
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M)
        {
            res++;
            j = 0;
        }
    }
    return res;
}

int GCD(int a, int b)
{
    return b == 0 ? a : GCD(b, a % b);
}

int LCM(int a, int b)
{
    int gcd = GCD(a, b);
    int lcm = a * b / gcd;
    return lcm;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;
    for (int w = 1; w <= q; w++)
    {
        string a, b;
        cin >> a >> b;

        int la = a.length();
        int lb = b.length();
        int lcm = LCM(la, lb);
        int xa = lcm / la;
        int xb = lcm / lb;
        string A = "";
        string B = "";
        for (int i = 0; i < xa; i++)
        {
            A += a;
        }
        for (int i = 0; i < xb; i++)
        {
            B += b;
        }
        if (A.compare(B) == 0)
        {
            cout << A << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
