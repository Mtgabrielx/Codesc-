#include <bits/stdc++.h>

using namespace std;

int mdc(long long int a, long long int b);

int main(){

    int n;

    cin >> n;

    long long int c[n];

    for(int i=0; i<n; i++) cin >> c[i];

    long long int v=c[0];

    for( int i=1; i<n; i++){
        v = mdc(v,c[i]);
    }

    cout << v << endl;

    return 0;
}

int mdc( long long int a, long long int b){

    return (b == 0 ? a : mdc(b,a%b));
}

