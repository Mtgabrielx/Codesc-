#include <bits/stdc++.h>

using namespace std;

stack <char> parenteses_1;

bool verificar ( char a);

void limpar( );

int main(){
    bool valido = true;

    int n;

    string expressao;

    cin >> n;

    bool sequencia[n];

    for( int i=0; i<n; i++){
        
        cin >> expressao;
        
        for ( int j=0 ; j< expressao.size(); j++){

            if( expressao[j] == '('){
                parenteses_1.push('(');
            }
            
            else if(expressao[j] == '['){
                parenteses_1.push('[');
            }
            
            else if(expressao[j] == '{'){
                parenteses_1.push('{');
            }

            if( expressao[j] == ')'){
                valido = verificar ( ')');
            }
            
            else if(expressao[j] == ']'){
                valido = verificar ( ']');
            }
            
            else if( expressao[j] == '}'){
                valido = verificar ( '}');
                
            }

            if(!valido){
                break;
            }

        }
        
        if( !parenteses_1.empty() ){sequencia[i]=false;}
        else{sequencia[i]=valido;}
        
        valido=true;

        limpar();
    }

    
    for ( int i=0; i<n; i++){
        if( sequencia[i]){
            cout << "S" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }

    cout << endl;

    return 0;
}


bool verificar ( char a){
    
    if( parenteses_1.empty() ){
        return 0;
    }

    if( a==')' && parenteses_1.top()=='('){
        parenteses_1.pop();
        return 1;
    }
    
    else if( a==']' && parenteses_1.top()=='[' ){
        parenteses_1.pop();
        return 1;
    }

    else if( a=='}' && parenteses_1.top()=='{' ){
        parenteses_1.pop();
        return 1;
    }
    
    return 0;
    
}

void limpar( ){
    
    while ( !parenteses_1.empty() ){
        parenteses_1.pop();
    }
}
// ({)}
