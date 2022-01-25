#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int num;
	cin >> num;
	int arr[num];
	int avg=0;
	for (int i=0;i<num;i++){
		cin >> arr[i];
		avg+=arr[i];
		
	}
	avg=(int)round((double)avg/num);
	int cost=0;
	for (int i=0;i<num;i++){
		int c=abs(arr[i]-avg);
		cost+=(c*c);
	}
	cout << cost << '\n';
	return 0;
}


