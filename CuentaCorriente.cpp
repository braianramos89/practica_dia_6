//
// Created by braian on 22/08/2022.
//

#include "CuentaCorriente.h"
#include <iostream>

CuentaCorriente::CuentaCorriente(int nCuenta, float saldo, float importePorTransaccion):Cuenta(nCuenta,saldo) {
    this->importePorTransaccion = importePorTransaccion;

    this->transaccion = Cuenta::getTransaccion();
}

CuentaCorriente::CuentaCorriente() {};

CuentaCorriente::~CuentaCorriente(){};

void CuentaCorriente::obtenerInteres() {

    float saldo = Cuenta::getSaldo();
    float saldoActual=0;
    if (saldo <= 3000){

        saldo += (saldo * 0.05);

        Cuenta::setSaldo(saldo);
    }
    if (saldo >3000){
        saldoActual = saldo - 3000;
        saldo += (3000 * 0.05 );
        saldo += saldoActual * INTERES;
        Cuenta::setSaldo(saldo);
    }
}
void CuentaCorriente::comision() {

    float saldo = Cuenta::getSaldo();

    float comision = this->transaccion * COMISION;

    saldo = saldo - comision;

    cout<<"La comision es: "<<comision<<endl;

    Cuenta::setSaldo(saldo);
}