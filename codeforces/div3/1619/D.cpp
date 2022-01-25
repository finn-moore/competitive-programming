#include <bits/stdc++.h>
using namespace std;
int m,n;
vector<vector<int>>ja;
bool possible(int val){
	if (n==1){
		return true;
	}
	bool p[n];
	for (int b=0;b<n;b++){
		p[b]=false;
	}
	bool pair=false;
	for (int h=0;h<m;h++){
		int x=0;
		for (int k=0;k<n;k++){
			if (ja[h][k]>=val){
				p[k]=true;
				x++;
			}
		}
		if(x>1) pair=true;
	}
	if (!pair && n>1) return false;
	bool ans=true;	
	for(int b=0;b<n;b++){
		ans=ans && p[b];
	}
	return ans;
}
void solve(){
	cin >> m >> n;
	ja.assign(m, vector<int>(n));
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cin >> ja[i][j];
		}
	}
	int max=0;
	int min=INT_MAX;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if(ja[i][j]<min && ja[i][j]>max){
				if (possible(ja[i][j])){
					max=ja[i][j];
				}
				else{
					min=ja[i][j];
				}
			}
		}
	}
	cout << max;
}
int main(){
    int c;
	cin >> c;
	while(c-->0){
		solve(); 
		cout << "\n";
	}
	return 0;
}


