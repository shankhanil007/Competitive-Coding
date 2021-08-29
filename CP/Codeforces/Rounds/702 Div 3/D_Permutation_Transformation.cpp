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

class node
{
public:
    int data = 0;
    node *left = NULL;
    node *right = NULL;
    int depth = 0;

    node(int d, int dpth)
    {
        data = d;
        depth = dpth;
    }
};

node *buildTree(int arr[], int i, int j, int depth)
{
    // base case
    if (i >= j)
    {
        return NULL;
    }
    int max = -1;
    int idx = -1;
    for (int k = i; k < j; k++)
    {
        if (arr[k] > max)
        {
            max = arr[k];
            idx = k;
        }
    }
    node *root = new node(max, depth);
    root->left = buildTree(arr, i, idx, depth + 1);
    root->right = buildTree(arr, idx + 1, j, depth + 1);

    return root;
}

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->depth << " ";
    inorder(root->right);
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        node *root = buildTree(arr, 0, n, 0);
        inorder(root);
        cout << endl;
    }

    return 0;
}
