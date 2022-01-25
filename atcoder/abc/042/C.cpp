#include <bits/stdc++.h>
using namespace std;

int solve(){
	int p, n;
	cin >> p >> n;
	int d[n];
	for (int i=0; i<n; i++){
		cin >> d[i];
	}
	for (int i=p;i<999999;i++){
		int x=i;
		int numdigits=0;
		while (x>0){
			x=x/10;
			numdigits++;
		}
		int dig[numdigits];
		x=i;
		int c=0;
		while (x>0){
			dig[c]=x%10;
			x=x/10;	
			c++;
		}
		bool ret=true;
		for (int h=0;h<numdigits;h++){
			for(int k=0;k<n;k++){
				if (dig[h]==d[k]){
					ret=false;
				}
			}
		}
		if (ret) return i;
	}
	return 0;

}
int main(){
    cout << solve() << "\n";	
	
	return 0;
}


