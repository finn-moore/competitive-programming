#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, a+n);
		int x=n;
	for (int i=0;i<n;i++){
		while (a[x]-2>a[i]){
			a[x]--;
			a[i]++;
		}
		x--;
	}
	sort(a, a+n);
	cout << a[0]-a[n] << "\n";
}
int main(){
   	int c;
	cin >> c;
	while(c-->0){
		solve();
	}
	return 0;
}


