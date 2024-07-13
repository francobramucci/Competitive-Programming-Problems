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

int main(){
	int v, pos, mini = MOD, l, num[10];
	vector<int> ans;
	cin >> v;

	forr(i,1,10){
		cin >> num[i];
		if(num[i] <= mini){
			mini = num[i];
			pos = i;
		}		
	}
	if(v < mini) cout << -1;

	int maxl = l = floor((float)v/mini);
	int aux = v, i = 9;

	while(l > 0 && i >= pos){
		//DBG(i);		
		i = max(i,pos);
		int cantr;
		
		if(aux == num[i]) cantr = 0;
		else cantr = floor((float)(aux-num[i])/mini); 
		
		if(cantr == l-1){
			aux -= num[i];
			ans.pb(i);
			l--;
		}else i--;
	}

	for(auto v : ans){
		cout << v;
	}

}
