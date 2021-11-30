#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    int poste=0, substituido=0, reparado=0;

    for(int i=0; i<n; i++){
        cin >> poste;
        if( poste<50 ){
            substituido++;
        }

        else if(poste>=50 && poste<85){
            reparado++;
        }
    }

    cout << substituido << " " << reparado ;

    return 0;
}