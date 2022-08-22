#include "CuentaAhorro.h"
#include "Cuenta.h"

#include <iostream>



CuentaAhorro::CuentaAhorro(int nCuenta, float saldo, float cuotaMantenimiento) : Cuenta (nCuenta, saldo) {

    this->cuotaMantenimiento = cuotaMantenimiento;


}


CuentaAhorro::~CuentaAhorro() {

}

void CuentaAhorro :: comision() {

    float saldoActual = Cuenta::getSaldo();
    saldoActual -= this->cuotaMantenimiento + COMISION;
    Cuenta::setSaldo(saldoActual);

}
