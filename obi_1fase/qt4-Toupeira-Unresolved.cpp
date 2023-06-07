#include <bits/stdc++.h>

using namespace std;

int main(){
    int nos, tuneis;

    cin >> nos >> tuneis;
    int paresPossiveis[nos * 4];

    for (int i = 0; i < nos * 4; i+=4){
        int num1, num2;
        cin >> num1 >> num2;

        paresPossiveis[i] = num1;
        paresPossiveis[i + 1] = num2;
        paresPossiveis[i + 2] = num1;
        paresPossiveis[i + 3] = num2;
    }
    int contCertos = 0;
    int numPasseios;
    cin >> numPasseios;

    while(numPasseios){
        int n;
        cin >> n;
        int passeio[n * 2];

        for (int i = 0; i < n * 2; i += 2){
            cin >> passeio[i];
            cin >> passeio[i + 1]; 
        }

        for(int i = 0; i < numPasseios * 2; i += 2){
            for(int j = 0; j < nos * 4; j++){
                if(passeio[i] == paresPossiveis[j] && passeios[i + 1] == paresPossiveis[j + 1]){
                    contCertos++;
                    break;
                }
            }
        }

        numPasseios--;
    }
   
    
    while(eh_legal){
        for(int i = 0; i < numPasseios * 2; i += 2){
            for(int j = 0; j < nos * 4; j++){
                if(passeios[i] == paresPossiveis[j] && passeios[i + 1] == paresPossiveis[j + 1]){
                    contCertos++;
                    break;
                }
            }
        }
    }

    return 0;
}