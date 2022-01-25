/*
ID: finnmoo1
LANG: C++
TASK: friday
*/
#include <bits/stdc++.h>
using namespace std;
int isleap(int year){
	return year%400==0 || (year%4==0 && year%100!=0);
}
int montab[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int lenmonth(int month, int year){
	if (month==1){
		return montab[month] + isleap(year);
	}
	return montab[month];
}

int main(){
	freopen("friday.in","r",stdin);
	freopen("friday.out","w",stdout);
    int N;
	cin >> N; 
	int dow[7];
	for (int i=0;i<7;i++){
		dow[i]=0;
	}
	int startyear=1900;
	int day=0;
	for (int y=startyear;y<startyear+N;y++){
		for (int m=0;m<12;m++){
			dow[day]++;
			day=(day+lenmonth(m,y))%7;
		}
	}
	for (int i=0;i<7;i++){
		if (i>0){
			cout << " ";
		}
		cout << dow[i];
	}
	return 0;
}


