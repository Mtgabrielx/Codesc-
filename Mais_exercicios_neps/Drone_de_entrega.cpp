#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, j_menor, j_maior, aux;

    cin >> a >> b >> c;

    if(a > c){
        aux = a;
        a = c;
        c = aux;
    }
    if( a > b){
        aux = a;
        a = b;
        b = aux;
    }
    if( c < b){
        aux = c;
        c = b;
        b = aux;
    }

    cin >> j_menor >> j_maior;

    if( j_menor > j_maior){
        aux = j_maior;
        j_maior = j_menor;
        j_menor = aux;
    }
    
    if( j_menor < a)
        cout << "N";
    else if( j_maior < b)
        cout << "N";
    else
        cout << "S";
    return 0;
}