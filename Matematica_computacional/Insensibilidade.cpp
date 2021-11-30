#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, insensibilidade=0;

    cin >> n;

    for( int i=0; i<n; i++){
        int x0,y0,y1,x1;

        cin >> x0 >> y0 >> x1 >> y1;

        // cout << i << pow((x1-x0),2) << endl;
        // cout << i << pow((y1-y0),2) << endl;
        insensibilidade += pow((x1-x0),2) + pow((y1-y0),2);
    }

    cout << insensibilidade;

    return 0;
}