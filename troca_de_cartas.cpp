#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b, tmp, troca=0;

    cin >> a >> b;

    set<int> alice; set<int> bea;

    for( int i=0; i<a; i++){
            
        cin >> tmp;
        alice.insert(tmp);

    }

    for( int i=0; i<b; i++){
            
        cin >> tmp;
        bea.insert(tmp);
        
    }

   if( alice.size()<=bea.size()){
        for(set<int>::iterator it=alice.begin(); it!=alice.end(); ++it){
            if( bea.find(*it)== bea.end()){
                troca++;
            }
        }
   }

    else{
        for(set<int>::iterator it=bea.begin(); it!=bea.end(); ++it){
            if( alice.find(*it)== alice.end()){
                troca++;
            }
        }
    }

    cout << troca << endl;;

    return 0;
}