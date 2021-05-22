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
{int i,j,n,k,e,sum=0,maxm;
 vector <int> v1;
 vector <int> v2;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>e;
     v1.push_back(e);
 }
  for(i=0;i<n;i++)
  {
      sum=sum+v1[i];
      v2.push_back(sum);
  }
  maxm=v2[n-1];
  if(maxm-v2[0]==0)
  {
      cout<<"YES"<<endl;
      return;
  }
  else{
  for(i=1;i<n;i++)
  {
      if(maxm-v2[i]==v2[i-1])
      {
          cout<<"YES"<<endl;
          return;
      }
  }
  cout<<"NO"<<endl;
  return;
  
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
	cin >> T;
	//T = 1;
	while (T--)
	{
		solve();
	}

	//cout << getCurrentTime() << endl;
	return 0;
}