#include <bits/stdc++.h>

using namespace std;

int fibonacci(int a, int b, int c){
    
    if(a==0){
        return 0;
    }

    else{
        
        cout << b << " ";
        
        int aux=c;
        c = b+c;
        b = aux;

        return fibonacci(a-1, b, c);

    }

}

int main(){

    int n;

    cin >> n;

    fibonacci(n, 0 ,1);

    return 0;
}