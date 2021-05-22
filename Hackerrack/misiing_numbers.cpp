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
{int n1,n2,i,j,k,e;
unordered_map<int,int> m1;
map<int,int> m2;
  cin>>n1;
  for(i=0;i<n1;i++)
  {
      cin>>e;
      m1[e]++;
  }
  cin>>n2;
  for(i=0;i<n2;i++)
  {
      cin>>e;
      m2[e]++;
  }
  k=m2.size();
  for(auto i:m2)
  {
      if(i.second!=m1[i.first])
      {
          cout<<i.first<<" ";
      }

  }


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
	// cin >> T;
	T = 1;
	while (T--)
	{
		solve();
	}

	//cout << getCurrentTime() << endl;
	return 0;
}