#include <bits/stdc++.h>
using namespace std;

int main()
{int n,m;
    cin >> n >> m;
    vector <string> v;
    string s;
    for ( int i = 0; i < n; i++ ) {
        cin >> s;
        v.push_back(s);
    }
    int ans = 0;
    int cnt = 0;
    for ( int i = 0; i < n - 1; i++ ) {
        for ( int j = i+1; j < n; j++ ) {
            int val = 0;
            for ( int k = 0; k < m; k++ ) {
                if ( v[i][k] == '1' || v[j][k] == '1' ) val++;
            }
            if ( ans < val ) {
                ans = val;
                cnt = 1;
            }
            else if ( ans == val ) {
                cnt++;
            }
        }
    }
    cout << ans << endl << cnt << endl;
}