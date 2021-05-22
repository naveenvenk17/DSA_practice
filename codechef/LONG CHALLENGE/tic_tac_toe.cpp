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
{int i,j,n,k,num=0,x,o;
  vector<char> v;
  char c,a,b;
  for(i=0;i<9;i++)
  v.push_back(0);

  for(i=0;i<n;i++)
  {
      cin>>c;
      if(c=='_')
      num++;
      else if(c=='X')
      x++;
      else
      o++;
      
    
      v.push_back(c);   
  }
    if(x-o>1 || 0-x>1)
    cout<<3<<nl;
    else{
    int flag=0;
  for(i=0;i<3;i++)
  {  a=v[3*i];
     b=v[3*i+1];
     c=v[3*i+2];

     if(a==b && b==c && a!='_')
     flag++;
  }
    if (flag<2)
  {    for(i=0;i<3;i++)
    {   a=v[i];
        b=v[3+i];
        c=v[6+i];

        if(a==b && b==c && a!='_')
        flag++;
    }
  }
    if(flag<2)
    {  a=v[0];b=v[4];c=v[8];
       if(a==b && b==c && a!='_')
          flag++;
        a=v[2];b=v[4];c=v[6];
       if(a==b && b==c && a!='_')
          flag++;
    }
  if(flag>1)
  {cout<<3<<nl;}
  else if(flag==1)
  cout<<1;
  else if(flag==0)
  {
      if(num==0)
      cout<<1<<nl;
      else if(num>0)
      cout<<2<<nl;

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
	cin >> T;
	//T = 1;
	while (T--)
	{
		solve();
	}

	//cout << getCurrentTime() << endl;
	return 0;
}