/*
ID: finnmoo1
LANG: C++
TASK: beads
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("beads.in","r",stdin);
	freopen("beads.out","w",stdout);
	int c;
	cin >> c;
	int max=0;
	char arr[(2*c)];
	for (int i=0;i<c;i++){
		cin >> arr[i];
	}
	for (int i=c;i<(2*c);i++){
		arr[i]=arr[i-c];
	}
	for (int i=0;i<(2*c);i++){
		int countr=0;int countl=0;
		int l=i;int r=i+1;
		char lc = arr[l]; char rc = arr[r]; char w = 'w';
		if (lc==w){
			int j=l;
			while(j>=0 && arr[j]==w){
				j--;
				lc=arr[j];
			}
		}
		if (rc==w){
			int j=r;
			while(j<(c*2) && arr[j]==w){
				j++;
				rc=arr[j];
			}
		}
		while(l>0 && (arr[l]==lc || arr[l]==w)){
			countl++;
			l--;
		}
		while(r<(c*2) && (arr[r]==rc || arr[r]==w)){
			countr++;
			r++;
		}
		int sum=countr+countl;
		if (sum>max) max=sum;	
	}
	if (max > c){
		max=c;
	}
    cout << max << "\n";
	return 0;
}


