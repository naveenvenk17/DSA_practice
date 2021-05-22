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
{int n;
 cin>>n;//n is the index of the matrix
 if(n==2)
 cout<<"-1"<<nl;
 else if(n==1)
 cout<<"1"<<nl;
 else
 {int r,c,val=1,i,j,it,e,a,b,s;
 map<int,int> m;
 //filling the principal diagonal
 for(r=1;r<n+1;r++)
 { e=(r*10) + r;
   m[e]=r;
    
 }
 i=n+1;s=n-1;int p=1;
 for(it=1;it<=n-1;it++)
 {   r=1;c=1;int temp_s=s;
      a=r+p;
      b=c;
     while(temp_s--)
     {
         
         e=(b*10)+a;
         m[e]=i;
         i++;a++;b++;

     }
     
     temp_s=s;
     a=r;
     b=c+p;
     while(temp_s--)
     {
         
         e=(b*10)+a;
         m[e]=i;
         i++;a++;b++;
     }
     
     p++;
     s--;
 }
 int count=1;
 for(auto it:m)
 {   char c=' ';
    count<<it.second<<c;
    count++;
    if(count==4)
    {
        cout<<nl;
        c=1;
    }

 }
 }
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

