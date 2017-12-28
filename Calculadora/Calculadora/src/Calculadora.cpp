#include "Calculadora.h"
#include <iostream>
#include <iomanip>


using namespace std;

Calculadora::Calculadora()
{
    //ctor
}

Calculadora::~Calculadora()
{
    //dtor
}


void Calculadora::set_taxa_outros(double tax_ou){
    taxa_outros = (1 - tax_ou/100);

}

void Calculadora::set_taxa_revenda(double tax_rev){
    taxa_revenda = (1 - tax_rev/100);
}

void Calculadora::set_valor_recebido(double val_rec){
    valor_recebido = val_rec;
}


void Calculadora::set_valor_revenda(){

    valor_revenda = get_taxa_revenda() * get_valor_recebido();

}

void Calculadora::set_valor_outros(){

    valor_outros = get_taxa_outros() * get_valor_recebido();
}

//Funcoes geteres da classe
double Calculadora::get_taxa_revenda(){
    return taxa_revenda;
}

double Calculadora::get_taxa_outros(){
    return taxa_outros;
}

double Calculadora::get_valor_recebido(){
    return valor_recebido;
}

double Calculadora::get_valor_revenda(){
    return valor_revenda;
}

double Calculadora::get_valor_outros(){
    return valor_outros;
}



void Calculadora::print(){

    cout << "Valor recebido original:___ " << get_valor_recebido() << endl;
    cout << "Valor a revenda:___________ " << get_valor_revenda() << endl;
    cout << "Valor a outros:____________ " << get_valor_outros() << endl;


}
