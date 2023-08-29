#include <iostream>

using namespace std;

void tabela(){

    int letra = 'ç';

    cout << "A letra " << letra << " corresponde ao valor " << hex << int(letra)<< endl;
    cout << "A letra " << letra << " corresponde ao valor " << oct<< int(letra)<< endl;

}


int main(void){
    tabela();
    return 0;

}