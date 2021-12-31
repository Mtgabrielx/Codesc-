#include <bits/stdc++.h>

using namespace std;

int main(){

    int x0,y0,y1,x1;

    cin >> x0 >> y0 >> x1 >> y1;

    int distancia = abs(x1-x0) + abs(y1-y0);

    cout << distancia;

    return 0;
}