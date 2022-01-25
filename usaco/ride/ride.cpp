/*
ID: finnmoo1
LANG: C++
TASK: ride
*/
#include <bits/stdc++.h>
using namespace std;

int solve(char *s){
	int o=1;
	for(int i=0; s[i]; i++){
		o=((s[i]-'A'+1)*o) %47;
	}
	return o;
}
int main(){
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);
    char comet[10]; char group[10];
	cin >> comet >> group;
	if(solve(comet)==solve(group)){
		cout << "GO\n";
	}
	else{
		cout << "STAY\n";
	}
	return 0;
}


