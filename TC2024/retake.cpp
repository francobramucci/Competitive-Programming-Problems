#include<bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i,0,n)

int main(){
	int k; cin >> k;

	forn(i,k){
		int n, t;
		long long x;
		cin >> n >> t >> x;
		int a = ceil((float)(t-x)/x);
		if(a>n-1) a=n-1;
		cout << a*(a+1)/2 << endl;
	}

}

