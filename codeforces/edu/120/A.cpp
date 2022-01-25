#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		int arr[3];
		for (int x=0;x<3;x++){
			cin >> arr[x];
		}
		sort(arr, arr+3);
		if (arr[0]==arr[1] && arr[2]%2==0){
			cout << "YES" << endl;
		}
		else if (arr[1]==arr[2] && arr[0]%2==0){
			cout << "YES" << endl;
		}
		else if (arr[2]==(arr[0]+arr[1])){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}


