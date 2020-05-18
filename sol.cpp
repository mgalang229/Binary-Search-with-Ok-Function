#include <bits/stdc++.h>

using namespace std;

int a[] = {1,2,3,4,5,6};
int n = sizeof(a)/sizeof(a[0]);
int num;

bool ok(int t){
	if(t < n && a[t] <= num){
		return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> num;
	int x = -1;
	for(int b = n/2; b >= 1; b /= 2){
		while(!ok(x+b)) x += b;
	}
	int k = x;
	cout << "index: " << k << "\n";
	return 0;
}
