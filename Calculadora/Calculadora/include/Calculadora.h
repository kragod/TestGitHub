#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora
{
    public:
        Calculadora();
        virtual ~Calculadora();
        void set_taxa_revenda(double);
        double get_taxa_revenda();
        void set_taxa_outros(double);
        double get_taxa_outros();
        void set_valor_recebido(double);
        double get_valor_recebido();
        void set_valor_revenda();
        double get_valor_revenda();
        void set_valor_outros();
        double get_valor_outros();

        void print();

    private:
        double taxa_revenda;
        double taxa_outros;
        double valor_recebido;
        double valor_revenda;
        double valor_outros;
};

#endif // CALCULADORA_H
