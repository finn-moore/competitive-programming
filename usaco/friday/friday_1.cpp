/*
ID: finnmoo1
LANG: C++
TASK: friday
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("friday.in","r",stdin);
	freopen("friday.out","w",stdout);
	int STARTYEAR = 1900;
	int N, days;
	days=0;
	int dow[7];
	for (int i=0;i<7;i++){
		dow[i]=0;
	}
	cin >> N;
	for(int j=0;j<N;j++){
		if ((STARTYEAR+j)%400 == 0 || (((STARTYEAR+j)%4)==0 && (STARTYEAR+j)%100 !=0)){
			for (int i=0;i<366;i++){
				if(i==12){
					dow[days%7]++;
				}
				else if (i==43){
					dow[days%7]++;
				}
				else if (i==72){
					dow[days%7]++;
				}
				else if (i==103){
					dow[days%7]++;
				}
				else if(i==133){
					dow[days%7]++;
				}
				else if(i==164){
					dow[days%7]++;
				}
				else if(i==194){
					dow[days%7]++;
				}
				else if(i==225){
					dow[days%7]++;
				}
				else if(i==256){
					dow[days%7]++;
				}
				else if(i==286){
					dow[days%7]++;
				}
				else if(i==317){
					dow[days%7]++;
				}
				else if(i==347){
					dow[days%7]++;
				}
				days++;
			}
		}
		else{
			for (int i=0;i<365;i++){
				if(i==12){
					dow[days%7]++;
				}
				else if (i==43){
					dow[days%7]++;
				}
				else if (i==71){
					dow[days%7]++;
				}
				else if (i==102){
					dow[days%7]++;
				}
				else if(i==132){
					dow[days%7]++;
				}
				else if(i==163){
					dow[days%7]++;
				}
				else if(i==193){
					dow[days%7]++;
				}
				else if(i==224){
					dow[days%7]++;
				}
				else if(i==255){
					dow[days%7]++;
				}
				else if(i==285){
					dow[days%7]++;
				}
				else if(i==316){
					dow[days%7]++;
				}
				else if(i==346){
					dow[days%7]++;
				}
				days++;
			}
		}
	}
	cout << dow[5] << " " << dow[6] << " " << dow[0] << " " << dow[1] << " " << dow[2] << " " << dow[3] << " " << dow[4] << endl;
	return 0;
}


