#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor;
    int a, b, c;

    cin >> valor >> a >> b >> c;
    int vet[3] = {a, b, c};
    int cont = 0;

    for (int i = 0; i < 3; i++){
        if (vet[i] <= valor){
            int soma = vet[i];
            cont++;
            for(int j = i + 1; j < 3; j++){
                if(soma + vet[j] <= valor){
                    soma+= vet[j];
                    cont++;
                }
            }
            break;
        }
    }
    
    cout << cont << '\n';
    return 0;
}