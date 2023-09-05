#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int alunos[3][3];

    // fazer em casa
    for(int i = 0; i <=2; i++) {
        cout << "Digite a matricula"<<  endl;
            cin >> alunos[i][0];
        for(int j = 0; j <=2; j++) {
            cout << "nota do aluno "<< j+1 <<"°" << endl;
            cin >> alunos[i][j];

        }
    }

    return 0;
}