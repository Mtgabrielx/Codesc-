#include <bits/stdc++.h>

using namespace std; 

int main (){

    queue <int> times;

    int jogo_1, jogo_2, ganhador, perde=90;

    for ( int i=0; i<16; i++){
        times.push (65+i);
    }


    for ( int i=0; i<15; i++){
        cin >> jogo_1 >> jogo_2;
        
        if( jogo_1 > jogo_2){
            ganhador = times.front();
            times.push(ganhador);
            times.pop();
        }

        else{
            times.pop();
            ganhador = times.front() ;
            times.push(ganhador);
        }
        
        times.pop();
    
    }

    cout << (char)times.front() << endl;

    return 0;
}





// 4 1
// 1 0
// 0 4
// 3 1
// 2 3
// 1 2
// 2 0
// 0 2
// 1 2
// 4 3
// 0 1
// 3 2
// 3 4
// 1 4
// 1 0
