#include <bits/stdc++.h>

using namespace std;

long double t[1000005];

int main (){
	long long int n, p, cont=0;
	cin >> n;
	for( long long int i=0; i<n; i++){
		cin >> p;
		if( t[p]==0){
			t[p]=1;
			cont += 2;
		}
		else{
			t[p]--;
		}
	}
	cout << cont << endl;
	return 0;
}
