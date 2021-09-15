#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >>n;

    set<int> tacos;

    for(int i=0; i<n;i++){
        int tmp;
        cin >> tmp;

        tacos.insert(tmp);
    }

    cout << tacos.size()*2 << endl;

    return 0;
}