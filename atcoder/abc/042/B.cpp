#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int c, l;
	cin >> c >> l;
	string w[c];
	string result;
	for (int i=0;i<c;i++){
		cin >> w[i];
	}
	sort(w, w+c);
	for (int i=0;i<c;i++){
		cout << w[i];	
	}
	cout << "\n";
	return 0;
}


