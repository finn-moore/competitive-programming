#include <bits/stdc++.h>
using namespace std;


int main(){
    int a, b, c;
	cin >> a >> b >> c;
	if (a==7){
		if (b==5 && c==5){
			cout << "YES";
		}else {
			cout << "NO";
		}


	}
	else if (b==7){
		if (a==5 && c==5){
			cout << "YES";
		}else {
			cout << "NO";
		}

	}
	else if (c==7){

		if (a==5 && b==5){

			cout << "YES";
		}
		else {
			cout << "NO";
		}

	}
	else {
		cout << "NO";
	}
	return 0;
}

