#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int x;
	cin >> x;
	int out=0;
	if (x>0){

		int arr[x];
		for (int i=0;i<x;i++){
			cin >> arr[i];
		}
		for (int i=0;i<x;i++){
			int d=arr[i];
			arr[i]=abs(d);
		}
		sort(arr, arr+x);
		for (int i=0;i<x;i++){
			if (i<(x-1) && i>0){
				if (arr[i]==arr[i-1] && arr[i]!=arr[i+1] && arr[i]!=0){
					out +=2;
				}
				else if (arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
					out +=1;
				}
				
				else if (arr[i]==arr[i-1] && arr[i]!=arr[i+1] && arr[i]==0){
					out +=1;
				}
			}
			else if (i==0){
				if (arr[i]!=arr[i+1]){
					out +=1;
				}
			}
			else {
				if (arr[i]!=arr[i-1]){
					out+=1;
				}
				else if (arr[i]!=0){
					out+=2;
				}
				else {
					out +=1;
				}
			}

		}
	}
	cout << out << endl;
}
int main(){
	int i;
	cin >> i;
	for (int j=0;j<i;j++){
		solve();
	}
	return 0;
}


