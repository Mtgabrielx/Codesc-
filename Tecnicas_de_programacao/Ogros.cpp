#include <bits/stdc++.h>

using namespace std;

int main (){

    int faixas_de_premios, Numero_de_ogros;

    cin >> faixas_de_premios >>  Numero_de_ogros;

    int limites[faixas_de_premios-1];

    for( int i=0; i<faixas_de_premios-1; i++){
        cin >> limites[i];
    }

    int pontos[faixas_de_premios];

    for(int i=0; i<faixas_de_premios; i++){
        cin >> pontos[i];
    }

    int ogros[Numero_de_ogros];

    for( int i=0; i<Numero_de_ogros; i++){
        cin >> ogros[i];
    }

    for( int i=0; i<Numero_de_ogros; i++){

        if( ogros[i] < limites[0] ){
            cout <<  pontos[0] << " ";
            
        }

        else if( ogros[i] > limites[faixas_de_premios-2] ){
            cout <<  pontos[faixas_de_premios-1] << " ";
            
        }

        else{
        
            int  inc=0, fim=faixas_de_premios;
            
            while(inc<=fim){
                
                int meio = (inc+fim)/2;

                if(limites[meio+1]>ogros[i] && limites[meio]<=ogros[i] ){ //gera bug
                    if( meio+1 >= faixas_de_premios-1 ){
                        cout << pontos[faixas_de_premios-1] << " ";
                    }

                    else{
                        cout << pontos[meio+1] << " ";
                    }
                    break;
                }

                if( limites[meio-1]<ogros[i] && limites[meio]>=ogros[i] ){
                    cout << pontos[meio] << " ";
                    break;
                }

                else if( limites[meio] > ogros[i] ){
                    fim = meio-1;
                }

                else if( limites[meio] < ogros[i] ){
                    inc = meio+1;
                }

            }
        }
    }

    return 0;
}
// bug1
// 5 12 
// 10 100 1000 100000 
// 10 20 100 120 150 
// 999 1000 1200 90900 10000 120000 100000 1 2 3 10000000 12

// 20 20 100 100 4199753 4199753 4199753 4199753 100000 100000 100000 100000 

// bug 2
// 5 10
// 500 1000 1500 2000
// 1 2 3 4 5
// 100 200 499 501 999 1050 1499 1568 1999 2090

// 1 1 1 2 2 3 3 4 4 4199753