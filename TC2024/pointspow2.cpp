#include<bits/stdc++.h>
using namespace std;
 
#define forr(i,a,b) for(int i = (int)a; i< (int)b; i++)
#define forn(i,n) forr(i,0,n)
#define dforr(i, a, b) for(int i = (int)a-1; i>= (int)b; i--)
#define pb push_back
#define endl '\n'
typedef long long ll;
#define MOD 1000000007
#define DBG(x) cerr << #x << " = " << (x) << endl
#define sz size

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, aux; cin >> n; 
	ll pot2[60], MAX = 1073741824; 
	bool need = true;
	vector<int> num, ans;
	set<int> is;

	pot2[0] = 1;
	forr(i,1,32){
		pot2[i]=pot2[i-1]*2;
	}
	
	forn(i,n){
		int v; cin >> v;	
		is.insert(v);
		num.pb(v);
		aux = v;
	}
	
	sort(num.begin(), num.end());

	forn(i, num.sz()){
		int v = num[i];
		int j = 0;
		while(pot2[j] <= MAX){
			if(is.find(v+pot2[j]) != is.end()){
				if(need){ ans.pb(v); ans.pb(v+pot2[j]); need=false;}
				if(is.find(v+2*pot2[j]) != is.end()){
					cout << 3 << endl;
					cout << v << ' ' << v+pot2[j] << ' ' << v+2*pot2[j] << endl;
					return 0;
				} 
			}
			j++;
		}
	}

	if(!ans.empty()){	
		cout << 2 << endl;
		cout << ans[0] << ' ' << ans[1] << endl;
	}
	else{cout << 1 << endl; 
		 cout << aux << endl;
	}
}
