#include<bits/stdc++.h>

#define pb push_back
#define endl '\n'
#define ff first
#define ss second
#define ALL(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef long double ld;

const ll MOD = 1e9 + 7;

int run_test(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int ans = 0;
    vector<int> dp(26, 0);

    for(int i = 0; i < n; i++){
        int frontCh = v[i][0] - 'a';
        int backCh = v[i].back() - 'a';
        dp[backCh] = max(dp[backCh], dp[frontCh] + v[i].length());
    }


    for(int i = 0; i < 26; i++){
        ans = max(ans, dp[i]);
    }


    cout << ans << endl;
	return 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tt;
	tt = 1;
	// cin >> tt;
	while(tt--){
		run_test();
	}
	return 0;
}
