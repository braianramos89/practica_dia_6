//
// Created by braian on 22/08/2022.
//
#include "Cuenta.h"
#include <iostream>

Cuenta::Cuenta(int nCuenta, float saldo) {
    this->nCuentas = nCuenta;
    this->saldo = saldo;
}

Cuenta::Cuenta() {};

Cuenta::~Cuenta(){};

void Cuenta::setNcuentas(int nCuenta) {

    if ((0 > nCuenta) && (nCuenta < 99)){
        this->nCuentas = nCuenta;
    }
    else{
        cout<<"Numero incorrecto"<<endl;
    }
}

void Cuenta::setSaldo(float saldo){

    if (saldo > 0){
        this->saldo = saldo;
    }
}

void Cuenta::deposito(float nDeposito) {

    this->saldo +=  nDeposito;
    this->transaccion = this->transaccion + this->transaccion;

}

void Cuenta::extraccion(float nExtraccion) {

    if (nExtraccion > this->saldo){
        cout<<"No hay saldo suficiente"<<endl;
        cout<<"Saldo actual: "<<this->saldo<<endl;

    }
    else{

        this->saldo -= nExtraccion;
    }
    this->transaccion++;
}

void Cuenta::mostrar(){

    cout<<"Numero de cuenta: "<<this->nCuentas<<endl;
    cout<<"Saldo actual: "<<this->saldo<<endl;
    cout<<"Tasa de interes: "<<this->tasaInteres<<endl;
}

void Cuenta::obtenerInteres(){
    int opc = 0;

    cout<<"Cuantos dias desea calcular el interes"<<endl;
    cout<<"1- Por 30 dias "<<endl;
    cout<<"2- Por 60 dias "<<endl;
    cout<<"3- Por 90 dias "<<endl;
    cin>>opc;
    switch (opc) {
        case 1:
            this->saldo += this->saldo * INTERES;
            cout<<"El interes es: "<<INTERES<<endl;
            break;
        case 2:
            this->saldo += this->saldo * INTERES * 2;
            cout<<"El interes es: "<<INTERES*2<<endl;
            break;
        case 3:
            this->saldo += this->saldo * INTERES * 3;
            cout<<"El interes es: "<<INTERES*3<<endl;
            break;

    }
}

void Cuenta::comision(){

    float comision = this->saldo - COMISION;
    cout<<"La comision es: "<<comision<<endl;

}