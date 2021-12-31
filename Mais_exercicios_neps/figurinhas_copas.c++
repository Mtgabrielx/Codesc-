#include<bits/stdc++.h>
using namespace std;

int main(){

    int total, marcada, comprada;

    cin >> total >> marcada >> comprada;

    int c[comprada], m[marcada], falta = marcada;

    for( int i=0; i<marcada; i++)
        cin >> m[i];

    for( int i=0; i<comprada; i++)
        cin >> c[i];
    
    for( int i=0; i<comprada; i++){
        for(int j=0; j<marcada; j++){
            if( c[i] == m[j]){
                falta--;
                m[j] = -1;
            }
        }
    }

    cout << falta;

    return 0;
}