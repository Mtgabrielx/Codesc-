#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for( int i=0; i<n; i++)
        cin >> v[i];
    for( int i=0; i<n; i++){
        if( i-1>0 && i+1<n){
            if( v[i] < v[i-1] && v[i] < v[i+1]){
                cout << "S";
                return 0;
            }
        }
    }
    cout << "N";
    return 0;
}