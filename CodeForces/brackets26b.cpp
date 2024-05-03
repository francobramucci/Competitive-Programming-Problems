#include<bits/stdc++.h>
using namespace std;

int main(){
    string exp;
    int cont=0, largo;
    cin >> exp;
    largo = exp.length();

    for(int i = 0; i < exp.length(); i++){
        if(exp[i] == '(') cont++;
        if(exp[i] == ')') cont--;
        if(cont < 0){
            largo--;
            cont = 0;
        }
    }
    
    largo -= cont;
    cout << largo;

}
