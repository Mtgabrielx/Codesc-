#include <bits/stdc++.h>

using namespace std;

bool compara( pair<int, int> a, pair<int, int>b){
    return a.first<b.first;
}

int main(){

    vector< pair< long long int, long long int > > clientes;
    pair <int , int> agenda;

    int n, ultimo=0, total=0;

    cin >> n;

    for( int i=0; i<n; i++){

        cin >> agenda.first >> agenda.second;

        clientes.push_back(agenda);

    }

    sort( clientes.begin(), clientes.end(), compara);

    // for( int i=0; i<n; i++){

    //     cout<< clientes[i].first << " " << clientes[i].second << endl;

    // }

    //cout << clientes.size() << endl;

    for( int i=clientes.size()-1; i>=0; i--){
        // cout << "o:" <<  i << endl;
        if( i==clientes.size()-1){
            ultimo = clientes[i].first;
            total++;
        }

        if( ultimo>=clientes[i].second){
            total++;
            //cout << clientes[i].first << endl;
            ultimo = clientes[i].first;
            
        }
    }

    cout << total << endl;

    return 0;
}
// 3
// 10 100
// 40 130
// 120 200