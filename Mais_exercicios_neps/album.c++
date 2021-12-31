#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b;

    int figurinha[a];

    for(int i=0; i<a; i++)
        figurinha[i]=0;

    for(int i=0; i<b; i++){
        cin >> c;
        figurinha[c-1]++;
        //cout << figurinha[c-1] << " ";
    }

    c=0;

    for( int i=0; i<a; i++){
        if(figurinha[i] == 0){
            c++;
        }
    }

    cout << c;

    return 0;
}