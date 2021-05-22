#include <bits/stdc++.h>
using namespace std;


// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
#define MOD (1000000000 + 7)
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define nl '\n'
#define all(x) x.begin(), x.end()
#define print(vec, l, r)         \
	for (int i = l; i <= r; i++) \
		cout << vec[i] << " ";   \
	cout << endl;
#define forf(i, a, b) for (int i = (a); i < (b); i++)
#define forr(i, a, b) for (int i = (a); i > (b); i--)
#define input(vec, N)             \
	for (int i = 0; i < (N); i++) \
		cin >> vec[i];
#define debug(x) cerr << #x << " = " << (x) << endl;

// template starts
typedef long long int ll;
#define int ll

void solve()
{   string s;
    int i,j,n,t,k;
    char a,b;
     cin >>n;
     cin>>s;
     unordered_map <char,int> m;
     a=s[0];
    
     m[a]=1;
     for(i=1;i<n;i++)
     { b=s[i];
    
       if(b==a)
       {
           m[b]=1;
       }
       else
       {
           auto it = m.find(b);
           if(it!=m.end())
           {
               cout<<"NO"<<nl;
               return;
           }
           else
           m[b]=1;
       }
       a=b;


        }
        cout<<"YES"<<nl;
        return;

}

clock_t startTime;
double getCurrentTime()
{
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//startTime = clock();
	int T;
	cin >> T;
	//T = 1;
	while (T--)
	{
		solve();
	}

	//cout << getCurrentTime() << endl;
	return 0;
}