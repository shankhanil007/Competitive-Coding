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

class graph
{
    int v;
    list<int> *l;

public:
    graph(int v)
    {
        this->v;
        l = new list<int>[v];
    }

    void add_edge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void print_graph()
    {
        for (int i = 0; i < v; i++)
        {
            cout << "Vextex " << i << "->";
            for (auto j : l[i])
                cout << j << " ";
            cout << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    graph g(4);

    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(2, 3);
    g.add_edge(1, 2);

    g.print_graph();

    return 0;
}
