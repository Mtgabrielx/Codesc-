#include<bits/stdc++.h>

using namespace std;

int main(){

    int moedas[] = {100, 50, 25, 10, 5, 1}, total_moedas=0, troco[6], n=0, i=0;
    
    for( auto i=0 ; i<6; i++){
        troco[i] = 0;
    }
    
    cin >> n;

    while(n>0){
        int rest = n/moedas[i];
        
        n -= moedas[i]*rest; 
        
        total_moedas += rest;

        troco[i] = rest;

        i++;

    }
    
    cout << total_moedas<< endl;

    for( auto i=0 ; i<6; i++){
        cout << troco[i] << endl;
    }

    return 0;
}