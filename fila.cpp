#include <bits/stdc++.h>

using namespace std;

vector <int> fila;
 
int main (){

    int n, m;

    cin >> n;

    for( int i=0; i<n; i++){
        int tmp=0;
        cin >> tmp;

        fila.push_back(tmp);
    }

    cin >> m;

    set<int> saiu;

    for( int i=0; i<m; i++){
        int tmp=0;
        cin >> tmp;

        saiu.insert(tmp);
    }

    for( int i=0; i<n; i++){
        if( saiu.find(fila[i]) == saiu.end()){ //se o elemento ja saiu da fila
            cout << fila[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
