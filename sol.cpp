#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[15] = {0};
	int x, pos, n = 10;
	for(int i = 0; i < n; i++){
		a[i] = i+1;
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	x = 50;
	pos = 5;
	n++;
	for(int i = n; i >= pos; i--){
		a[i] = a[i-1];
	}
	a[pos-1] = x;
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
