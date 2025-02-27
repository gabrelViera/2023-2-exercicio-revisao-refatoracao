#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private:
        double limiteChequeEspecial;

    public:
        void usarChequeEspecial(double valor);
        ContaCorrente(std::string titular, double saldo, double limite);
            
};


#endif