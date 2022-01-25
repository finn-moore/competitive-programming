#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	string prev;
	string thes;
	for (int i=0;i<n;i++){
		thes=s.substr(0,i+1);
		string temp=thes;
		reverse(temp.begin(), temp.end());
		thes+=temp;
		
		if (i>0){
			if (prev.compare(thes)<=0){
				cout << prev << endl;
				break;
			}
			else if (i==(n-1)){
				cout << thes << endl;
			}
		}
		else if (n==1){
			cout << thes << endl;
		}
		prev=thes;
	}
}
int main(){
   	int n;
	cin >> n;
	for (int i=0;i<n;i++){

		solve();
	} 
	return 0;
}


