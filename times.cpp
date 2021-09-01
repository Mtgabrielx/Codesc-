#include <bits/stdc++.h>

using namespace std;

bool poder( pair <string, int > a, pair <string, int > b){
    return a.second > b.second;
}

bool alfabeto( pair <string, int > a, pair <string, int > b){
    return a.first < b.first;
}

int main (){

    vector < pair <string, int > > jogadores;
    vector < pair <string, int > > selecao[1050];


    int skill, pessoas, times;
    string nome;

    cin >> pessoas >> times;

    for ( int i=0; i< pessoas; i++){
        
        cin >> nome >> skill;
        jogadores.push_back({ nome, skill});

    }

    sort( jogadores.begin(), jogadores.end(), poder);

    for ( int i=0; i< jogadores.size(); i++){
        
        selecao[ i % times ].push_back(jogadores[i]);
    }

    // for ( int i=0; i< pessoas; i++){
        
    //     cout << jogadores[i].first << " " << jogadores[i].second << endl;

    // }

    // cout << endl;

    for ( int i=0; i<times; i++){
        sort( selecao[i].begin(), selecao[i].end(), alfabeto );
    }

    for ( int i=0; i< times; i++){
        cout << "Time " << i+1 << endl; 
        for ( int j=0; j< selecao[i].size(); j++){
            cout << selecao[i][j].first << endl;
        }
        cout << endl;
    }

    return 0;
}