#include<bits/stdc++.h>

using namespace std;

int main(){
    int repeticoes = 0, frases;
    string portugues, japones, fala, traduzindo;

    cin >> repeticoes;

    int texto[repeticoes], cont=0;
    string cantoria[1050];

    for(int i=0; i<repeticoes; i++){
        map<string, string> dicionario;
        int temp=0;
        cin >> frases >> texto[i]; //recebe o numeros de frases e o numero do linhas do texto a ser traduzido
        temp = texto[i];
        if( i!=0){
            texto[i] = texto[i-1]+texto[i];
        }

        cin.ignore();

        for( int j=0; j<frases; j++){
            getline(cin, japones);
            getline(cin, portugues);

            dicionario.insert(make_pair(japones,portugues));

            //cout << japones << endl << portugues << endl;
        }
        //cout << endl;
        
        for( int j=0; j<temp; j++){
            getline(cin,fala); //recebe a linha do texto
            //cout << endl << fala << endl;
            
            for(int k=0; k<fala.size(); k++){ //forma a palavra desejada, pecorrendo o vetor até forma uma palavra e depois
                if(k+1 == fala.size()){
                    traduzindo.push_back(fala[k]);
                    
                   // cout << traduzindo << endl;
                    
                    if(dicionario.find(traduzindo) != dicionario.end()){ //a palavra é formada e apos isso elea é buscada no dicionario para traduzi-la
                       // cout << dicionario[traduzindo] << endl;
                        cantoria[cont] += dicionario[traduzindo];
                    }
                    
                    else{
                        cantoria[cont] += traduzindo;
                    }

                    cantoria[cont] += ' '; 

                    traduzindo.clear();
                }

                else if( fala[k]!= ' '){   
                    traduzindo.push_back(fala[k]);
                    
                }

                else{
                    //cout << traduzindo << endl;
                    
                    if(dicionario.find(traduzindo) != dicionario.end()){
                       // cout << dicionario[traduzindo] << endl;
                        cantoria[cont] += dicionario[traduzindo];
                    }
                    
                    else{
                        cantoria[cont] += traduzindo;
                    }

                    cantoria[cont] += ' ';

                    traduzindo.clear();
                }
            }
            //cout  << cont << " "<< cantoria[cont] << endl; 
            cont++;
        }
    }

    cout << endl;
    cout << endl;
    //cout << texto[0];
    for( int i=0; i<repeticoes; i++){
        if(i==0){
            for( int j=0; j<texto[i]; j++){
                cout << cantoria[j] << endl; 
            }
        }

        else{
            for( int j=texto[i-1]; j<texto[i]; j++){
                cout << cantoria[j] << endl; 
            }
        }
        cout << endl;
    }
    return 0;
}



// 2
// 4 3
// galaxy
// cara tossiu
// kagayaku
// canalha do
// atsuki
// alto que
// yuushi
// util
// o galaxy
// o galaxy
// o kagayaku atsuki yuushi
// 3 1
// bashulhan
// sobre a mesa
// hu
// esta
// hasefer
// o livro
// hasefer hu bashulhan

// 1
// 4 3
// galaxy
// cara tossiu
// kagayaku
// canalha do
// atsuki
// alto que
// yuushi
// util
// o galaxy
// o galaxy
// o kagayaku atsuki yuushi

// 1
// 3 1
// bashulhan
// sobre a mesa
// hu
// esta
// hasefer
// o livro
// hasefer hu bashulhan

// 2
// 2 2
// galaxy
// cara tossiu
// kagayaku
// canalha do
// o galaxy
// o kagayaku atsuki yuushi
// 3 1
// bashulhan
// sobre a mesa
// hu
// esta
// hasefer
// o livro
// hasefer hu bashulhan