#include <bits/stdc++.h>

using namespace std;

int main (){

    int ordem[3];

    for(auto i=0; i<3; i++){
        cin >> ordem[i];
    }

    for( int i=1; i<3; i++){
        int x = ordem[i], y = i-1;

        while (y>=0 && ordem[y] > x){
            ordem[y+1] = ordem[y];
            y--;
        }
        ordem[y+1] = x;
        
        // for(auto ki=0; ki<3; ki++){
        //     cout << ordem[ki] << " ";
        // }
        // cout << endl;
    }

    for(auto i=0; i<3; i++){
        cout << ordem[i] << endl;
    }

    return 0;
}