#include <bits/stdc++.h>

using namespace std;

int main (){

    stack <char> chaves;

    int n;
    
    bool verdade = true;

    cin >> n;
    
    cin.ignore() ;

    string expressao;

    for ( int i=0; i<n;i++){

        getline(cin, expressao);

        for( int j=0; j< expressao.size(); j++){
            
            if( expressao[j]=='{' ){
                chaves.push('{');
            }
            
            if(expressao[j]=='}' ){
                
                if( chaves.empty() ){
                    verdade = false;
                }

                else{
                    chaves.pop();
                }
            }
        }
    }

    if( verdade && chaves.empty() ) {
        cout << "S";
    }

    else{
        cout << "N";
    }
    return 0;
}
