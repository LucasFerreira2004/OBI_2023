#include <bits/stdc++.h>

using namespace std;

int main(){
    int linhas, colunas;

    cin >> linhas >> colunas;
    int mat[linhas][colunas];

    for (int l = 0; l < linhas; l++){
        for (int c = 0; c < colunas; c++){
            cin >> mat[l][c];
        }
    }

    int numPares;
    int contVendas = 0;
    
    cin >> numPares;
    for (int i = 0; i < numPares; i++){
        int l, c;
        cin >> l >> c;
        l--;
        c--;
        if (mat[l][c] != 0){
            contVendas++;
            mat[l][c]--;
        }
    }

    cout << contVendas << endl;

    return 0;
}