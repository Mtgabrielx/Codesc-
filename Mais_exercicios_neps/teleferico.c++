#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, c;

    cin >> c >> a;

    int resto = a/(c-1);

    if( resto*(c-1) < a){
        cout << resto + 1;
    }

    else{
        cout << resto ;
    }

    return 0;
}