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
{int i,n,k,e,flag=0,sum;
   vector <int> v1,v2;
   cin>>n>>k;
       for(i=0;i<n;i++)
       {
           cin>>e;
           v1.push_back(e);
       }
       for(i=0;i<n;i++)
       {cin>>e;
        v2.push_back(e);
       }
       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       reverse(v2.begin(),v2.end());
       for(i=0;i<n;i++)
       {
           sum=v1[i]+v2[i];
           if(sum!=k)
           flag++;
       }
       if(flag==0)
       cout<<"YES"<<nl;
       else
       cout<<"NO"<<nl;
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