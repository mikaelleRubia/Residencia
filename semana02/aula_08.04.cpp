#include <iostream>
#include <cctype>

using namespace std;


int main(int argc, char *argv[])
{

    string str;

    str.append(argv[1]);

    if (argc == 1)
    {
        cout << "Sem argumento, por favor verifique se os argumentos foram passados \n";
    }
    else if(argc == 3)
    {
        cout << "por favor verifique se os argumentos foram passados , vc passou argumentos a mais, só precisamos do seu n\n";
    }
    else if(str == "\\int"){      
        int resultado_int = atoi(argv[2]) / atoi(argv[3]);
        cout << "resultado" << resultado_int  << endl;

    }
    else if(str == "\\double"){
         double resultado_dou = atof(argv[2]) / atof(argv[3]);
        cout << "resultado" << resultado_dou  << endl;

    }


    return 0;
}