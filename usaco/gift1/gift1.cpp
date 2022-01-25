/*
ID: finnmoo1
LANG: C++
TASK: gift1
*/
#include <bits/stdc++.h>
using namespace std;

#define MAXPEOPLE 10
#define MAXNAME 14
int pcount=0;
struct Person {
	char name[MAXNAME];
	int balance;
};

Person people[MAXPEOPLE];

void addperson(char* name){
	strcpy(people[pcount].name, name);
	people[pcount].balance=0;
	pcount++;	
}
Person* lookup(char* name){
	for (int i=0;i<pcount;i++){
		if(strcmp(people[i].name, name)==0){
			return &people[i];
		}
	}
}

int main(){
	freopen("gift1.in","r",stdin);
	freopen("gift1.out","w",stdout);
	int np, gift, recipnum;
	char name[MAXNAME];	
	cin >> np;
	for (int i=0;i<np;i++){
		cin >> name;
		addperson(name);
	}
	for (int i=0;i<np;i++){
		cin >> name >> gift >> recipnum;
		if (recipnum>0){
			int amount = gift/recipnum;
			char recipient[MAXNAME];
			for (int j=0;j<recipnum;j++){
				cin >> recipient;
				lookup(name)->balance-=amount;
				lookup(recipient)->balance+=amount;	
			}
		}
	}
	for (int i=0;i<pcount;i++){
		cout << people[i].name << " " << people[i].balance << "\n";
	}
	return 0;
}



