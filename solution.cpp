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
    vector<pair<string, int>> dp(26);
    for(auto &x : dp){
        x = {"", 0};
    }

    for(int i = 0; i < n; i++){
        int frontCh = v[i][0] - 'a';
        int backCh = v[i].back() - 'a';
        if(dp[backCh].second < dp[frontCh].second + (int)v[i].length()){
            dp[backCh].second = dp[frontCh].second + (int)v[i].length();
            dp[backCh].first = dp[frontCh].first + v[i];
        }
        if(dp[backCh].first[0] == dp[backCh].first.back()){
            ans = max(ans, dp[backCh].second);
        }

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