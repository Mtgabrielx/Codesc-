#include <bits/stdc++.h>

using namespace std;

int main (){

    vector <int> par;
    vector <int> impar;

    for( int i=0; i<10; i++){
        int n=0;
        cin >> n;

        if( n%2==0){
            par.push_back(n);    
        }
        
        else{
            impar.push_back(n);
        }
    }

    for(int i=0; i<par.size(); i++){
        cout << par[i] << " "; 
    }

    cout << endl;

    for(int i=0; i<impar.size(); i++){
        cout << impar[i] << " "; 
    }

    return 0;
}