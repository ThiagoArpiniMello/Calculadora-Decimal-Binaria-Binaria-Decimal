#include <iostream>
#include <math.h>
#include <locale.h>


using namespace std;

int main()
{   setlocale(LC_ALL,"");
    int valor;
    bool executa = true ;
    int bin[8];

    while(executa){
        valor = 0 ;
        cout << "==Calculadora de convers�o Decimal para Bin�rio e Binario para Decimal==" <<endl;
        cout << "-------Escolha um dos valores-------" <<endl;
        cout << "1 - Decimal para Bin�rio" << endl;
        cout << "2 - Bin�rio para Decimal" << endl;
        cout << "0 - Para sair" << endl;
        cin >> valor;
        cout << valor << " Valor que digitei" << endl;
        if (valor == 0 ) {
            cout << "saindo do programa";
            executa = false ;
            exit;
        }else {
            if (valor ==1){
             int decimal;
             cout << "Digite o valor em Decimal:" << endl;
             cin >> decimal;
             cout << "O valor em Decimal �: "<< decimal << endl;
             for (int i =7; i >= 0; i-- ) {
                  if (decimal % 2 == 0){
                        bin[i] = 0;
                    }else{
                        bin[i] = 1;
                    }
                    decimal = decimal / 2 ;
                  }
            for (int i = 0; i < 8; i++ ){
                cout << bin[i];
            }
                cout << endl ;


            }else {
                if(valor == 2) {
                    int binario;
                    int decimal = 0;
                    cout << "Digite o valor em Bin�rio:" <<endl;
                    cin >> binario;
                    cout << "O valor em Bin�rio �: "<< binario << endl;
                    int i = 0;
                    for (int i = 0; i < 8; i++){
                    decimal = decimal + pow(2,i)*(binario%10);
                    binario = binario / 10 ;

                    }cout << decimal << endl;


                }else{
                    cout << "N�o temos esse valor no menu" <<endl;
                }
            }
        }
    }

    return 0;
}
