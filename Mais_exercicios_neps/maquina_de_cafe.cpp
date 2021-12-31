#include <bits/stdc++.h>

using namespace std;

int main(){
    // int x = 1;
    // int *y = &x;
    // int **z = &y;

    // printf("%d %d %d", x, *y, **z );
    int a[3], descidas=0, max=-1, max_id, escolha=0;

    for( int i=0; i<3; i++){
        cin >> a[i];
        if( max<a[i]){
            max = a[i];
            max_id = i;
        }
    }

    for( int i=0; i<3; i++){
        if( i!= max_id){
            escolha = a[i]+escolha;
        }
    }

    if( escolha<=max){
        for( int i=0; i<3; i++){
            if( i != max_id){
                descidas = descidas + ( abs(i-max_id)*a[i]) *2;
                // cout << abs( i-max_id ) << " " << a[i] <<" ";
            }
        }
    }
    else{
        descidas = 2*( a[0] + a[2] );
    }   

    cout << descidas;
}