#include <bits/stdc++.h>

using namespace std;

int main(){

    int p, f;

    cin >> p >> f;

    int pontos[f];

    for( int i=0; i<f; i++){
        cin >> pontos[i];
    }

    int soma=p; 
    
    for( int i=0; i<f; i++){
        soma += pontos[i];

        if(soma>100){
            soma = 100;
        }

        if( soma <0 ){
            soma = 0;
        }
    }

    cout << soma;

    return 0;
}