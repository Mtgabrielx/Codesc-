#include <bits/stdc++.h>

using namespace std;

int eh_primo(long long int a );

int main(){

    long long int n;

    cin >> n;

    if(eh_primo(n)) cout << "N" << endl;

    else cout << "S" << endl;

    return 0;
}

int eh_primo(long long int a ){
    
    for( int i=2; i<=sqrt(a); i++){
        if(a%i==0) return 0;
    }

    return 1;
}
