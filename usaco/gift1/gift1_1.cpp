/*
ID: finnmoo1
LANG: C++
TASK: gift1
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("gift1.in","r",stdin);
	freopen("gift1.out","w",stdout);
    int np;
	char p[10][14]; int b[10];
	cin >> np;
	for (int i=0;i<np;i++){
		cin >> p[i];
		b[i]=0;
	}
	for (int i=0;i<np;i++){
		char name[14]; int gift; int number;int index2; 
		cin >> name >> gift >> number;
		for (int j=0; j<np; j++){
			if (strcmp(p[j],name)==0){
				index2=j;
			}
		}
		if (number>0){
			int amount = gift/number;
			for (int j=0; j<number;j++){
				char recipient[14];
				cin >> recipient;
				int index=0;
				for (int k=0; k<np; k++){
					if (strcmp(p[k],recipient)==0){
						index=k;	
					}
				}
				b[index]+=amount;
				b[index2]-=amount;
			}
		}
	}
	for(int i=0;i<np;i++){
		
		cout << p[i] << " " << b[i] << "\n";
	}

	return 0;
}


