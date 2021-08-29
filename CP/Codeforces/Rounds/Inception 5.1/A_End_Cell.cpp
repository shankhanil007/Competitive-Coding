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

int findK(int A[MAX][MAX], int n, int m, int k)
{
    if (n < 1 || m < 1)
        return -1;

    /*....If element is in outermost ring ....*/
    /* Element is in first row */
    if (k <= m)
        return A[0][k - 1];

    /* Element is in last column */
    if (k <= (m + n - 1))
        return A[(k - m)][m - 1];

    /* Element is in last row */
    if (k <= (m + n - 1 + m - 1))
        return A[n - 1][m - 1 - (k - (m + n - 1))];

    /* Element is in first column */
    if (k <= (m + n - 1 + m - 1 + n - 2))
        return A[n - 1 - (k - (m + n - 1 + m - 1))][0];

    /*....If element is NOT in outermost ring ....*/
    /* Recursion for sub-matrix. &A[1][1] is
    address to next inside sub matrix.*/
    return findK((int(*)[MAX])(&(A[1][1])), n - 2,
                 m - 2, k - (2 * n + 2 * m - 4));
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
        ll n, m;
        cin >> n >> m;
    }

    return 0;
}
