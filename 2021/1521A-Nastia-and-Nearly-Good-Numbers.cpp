#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define endl "\n"

void testCase(){
	ll a,b;
	cin >> a >> b;
	//if b == 1 then we can't get any nearly good numbers
	if (b == 1){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
		//anything times by a will be a nearly good number
		//a times b will be divisible by both a and b making it a good number
		cout << a << " " << a*b << " " << a*(b+1) << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		testCase();
	}

	return 0;
}