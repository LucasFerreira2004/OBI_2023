#include <bits/stdc++.h>

using namespace std;

queue <int> sa;
queue <int> sb;

int main(){
    int tam1, tam2;

    cin >> tam1 >> tam2;
    for (int i = 0; i < tam1; i++){
        int num;
        cin >> num;
        sa.push(num);
    }

    for (int i = 0; i < tam2; i++){
        int num;
        cin >> num;
        sb.push(num);
    }
    
    int contSb = 0;
    for (int i = 0; i < tam1; i++){
        if(sa.front() == sb.front()){
            contSb++;
            sa.pop();
            sb.pop();
        }else{
            sa.pop();
        }
    }

    if (contSb == tam2) cout << "S\n";
    else cout << "N\n";
    return 0;
}