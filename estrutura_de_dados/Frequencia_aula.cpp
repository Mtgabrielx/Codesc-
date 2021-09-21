#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    set<int> presenca;

    cin >> n;

    for( int i=0; i<n; i++){
        int tmp;
        
        cin >> tmp;

        presenca.insert(tmp);
    }

    cout << presenca.size() << endl;

    return 0;
}