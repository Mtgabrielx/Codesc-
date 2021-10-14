#include <bits/stdc++.h>

using namespace std;

int main (){
    int internet, sistema;
    map<int, int> atualizacoes;
    map<int, int> sistemas_atualizdos;
    cin >> sistema >> internet;

    for( int i=0; i<sistema; i++){
        int tm, tmp;

        cin >> tm >> tmp;

        atualizacoes.insert(make_pair(tm, tmp));
    }

    for( int i=0; i<internet; i++){
        int tm, tmp;

        cin >> tm >> tmp;

        if( tmp > atualizacoes[tm] ){
            if( sistemas_atualizdos.find(tm)==sistemas_atualizdos.end() ){
                sistemas_atualizdos.insert(make_pair(tm, tmp));
            }

            else if( sistemas_atualizdos[tm] < tmp){
                sistemas_atualizdos[tm] = tmp;
            }
        }
    }

    for (map<int,int>::iterator it=sistemas_atualizdos.begin(); it!=sistemas_atualizdos.end(); ++it){
      cout << it->first<< " " << it->second << endl;
    }

    return 0;
}