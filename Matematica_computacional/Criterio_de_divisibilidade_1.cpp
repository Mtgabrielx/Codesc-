#include <bits/stdc++.h>

using namespace std;

int CharToInt(char a){
    return a - '0' ; 
}

int main(){

    string N;

    cin >> N;

    int TAM = N.size() - 1;

    int soma=0, si=0, sp=0;

    for( int i=0; i<=TAM; i++){
        if(i%2==0){
            sp += CharToInt(N[i]);
        }
        else{
            si += CharToInt(N[i]);
        }
    }

    soma = abs(si-sp);

    if(soma%11==0){
        cout << "S";
    }
    
    else{
        cout << "N";
    }

    return 0;
}

