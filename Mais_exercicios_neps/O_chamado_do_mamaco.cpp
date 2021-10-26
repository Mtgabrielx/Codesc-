#include <bits/stdc++.h>

using namespace std;

int main(){

    int quantidade, movimento=0;

    cin >> quantidade;

    int mamaco[quantidade];

    for(int i=0; i<quantidade; i++){
        cin >> mamaco[i];
    }

    for( int i=0; i<quantidade; i++){
        if( i+1!= mamaco[i]){
            movimento++;
        }
    }

    if( movimento!=0)
        cout << movimento; 
    
    else
        cout << "Cada mamaco em seu lugar";
    
    return 0;
}