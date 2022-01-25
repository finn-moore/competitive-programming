/*
ID: finnmoo1
LANG: C++
TASK: ride
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);

	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string comet; string group; int sumcomet=1; int sumgroup=1;
	cin >> comet >> group;
	int cometsize=comet.size(); int groupsize=group.size();
	if (cometsize == groupsize){
		for (int i=0; i<cometsize;i++){
			sumcomet*=(alphabet.find_first_of(comet.at(i))+1);
			sumgroup*=(alphabet.find_first_of(group.at(i))+1);
		}}
	else{
		for (int i=0; i<cometsize;i++){
			sumcomet*=(alphabet.find_first_of(comet.at(i))+1);
		}
		for (int i=0; i<groupsize;i++){
			sumgroup*=(alphabet.find_first_of(group.at(i))+1);
		}
	}
	if ((sumcomet % 47) == (sumgroup % 47)){

		cout <<	"GO\n";
	}
	else {
		cout << "STAY\n";
	}
	return 0;
}


