#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i = (int)a; i < (int)b; i++)
#define forn(i,n) forr(i,0,n)
#define dforr(i,a,b) for(int i = (int)a; i > (int)b; i--)
#define dforn(i,n) dforr(i,n,0)
#define endl '\n'
#define pb push_back
typedef long long ll;

int main(){
	int tc; cin >> tc;
	forn(i,tc){
		int n; cin >> n;
		int arr[60]={0};
		bool flag=0;
		forn(j,n){
			int v; cin >> v;
			while(v!=0){
				if(v<=n) arr[v] += 1;
				v = floor(v/2);
			}
		}
		dforn(k,n){
			int aux = k;
			if(arr[k] >= 1){
				while(aux!=0){
					arr[aux] -= 1;
					aux = floor(aux/2);
				}
			}	
			else{
				cout << "NO" << endl;
				flag = 1;
				break;
			}
		}
		if(!flag){
			cout << "YES" << endl;
		}
	}
}
