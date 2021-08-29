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

    int q; cin>>q;
    for(int w=1;w<=q;w++)
    {
        int k; cin>>k;
        string no; cin>>no;
        map<int, int> map;
        int two = 0;
        int other = 0;
        int flag = 0;
        string st="";

        for(int i=0;i<k;i++)
        {
            char ch = no[i];
            int n = ch-48;
            st+=n;
            if(n==1 || n==9)
            {
                cout<<"1"<<endl;
                cout<<n<<endl;
                flag = 1;
                break;
            }
            else if(n%2==0 && n!=2)
            {
                cout<<"1"<<endl;
                cout<<n<<endl;
                flag = 1;
                break;
            }
        }

        if(flag==0)
        {
            for(int i=0;i<k;i++)
            {
                char ch = no[i];
                int n = ch-48;
                st+=n;

                if(n==2)
                    two = 1;
                else
                    other = n;

                map[n]++;
                if(map[n]>1)
                {
                    cout<<"2"<<endl;
                    cout<<n<<""<<n<<endl;
                    flag = 1;
                    break;
                }

                if(n==2 && i>=1)
                {
                    cout<<"2"<<endl;
                    cout<<other<<""<<"2"<<endl;
                    flag = 1;
                    break;
                }
            }
        }

        if(flag==0)
        {
            if(no[0]=='2' && map[5]>0)
            {
                cout<<"2"<<endl;
                cout<<"25"<<endl;
                flag = 1;
                
            }
            else if(no[0]=='2' && map[7]>0)
            {
                cout<<"2"<<endl;
                cout<<"27"<<endl;
                flag = 1;
            }
        }
        

        if(flag==0)
        {
            if(no.length()==3)
            {
                if(no.compare("357")==0 || no.compare("375")==0)
                {
                    cout<<"2"<<endl;
                    cout<<"35"<<endl;
                    flag = 1;
                }

                else if(no.compare("735")==0 || no.compare("753")==0)
                {
                    cout<<"2"<<endl;
                    cout<<"75"<<endl;
                    flag = 1;
                }
            }            
        }

        if(flag==0)
        {
            cout<<k<<endl;
            cout<<no<<endl;
        }
        
    }



    return 0;
}
