/****************************************
 *Programa feito para implementação de taxas de descontos
 *Venda ao consumidor
 *Venda a outros
 *Valor dos descontos inseridos ao inicio do programa
 *Modificações a serem feitas
 *****************************************/


#include <iostream>
#include "Calculadora.h"
using namespace std;

int main()
{
    double valor_recebid;
    double taxa_outro;
    double taxa_revend;
    Calculadora *Calc = new Calculadora();
    cout << "Entre com o preco ou digite '0', zero, para finalizar: ";
    cin >> valor_recebid;
    cout << "Entre com a taxa de revenda: ";
    cin >> taxa_revend;
    cout << "Entre com a taxa de outros: ";
    cin >> taxa_outro;

    Calc->set_taxa_outros(taxa_outro);
    Calc->set_taxa_revenda(taxa_revend);

    while(valor_recebid != 0){

    Calc->set_valor_recebido(valor_recebid);
    Calc->set_valor_revenda();
    Calc->set_valor_outros();
    Calc->print();
    cout << "Entre com o preco ou digite '0', zero, para finalizar: ";
    cin >> valor_recebid;

    }

    cout << "Finalizando calculadora!!!!" << endl;

    return 0;
}
