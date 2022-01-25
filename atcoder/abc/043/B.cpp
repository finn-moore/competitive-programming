#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	string s;
	cin >> s;
	vector<int>out;
	for (int i=0; i<s.size(); i++){
		if (s[i]=='0') out.push_back(0);
		else if (s[i]=='1'){
			out.push_back(1);
		}
		else if (!(out.empty())){
			out.pop_back();
			}
	}
	for (int i=0;i<out.size();i++){
		cout << out[i];	
	}
	cout << '\n';
	return 0;
}
 
 
