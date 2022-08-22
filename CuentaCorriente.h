
#ifndef TEMPLATECPP_CUENTACORRIENTE_H
#define TEMPLATECPP_CUENTACORRIENTE_H
#include "Cuenta.h"


using namespace std;

class CuentaCorriente : public Cuenta{

private:
    float importePorTransaccion;
    int transaccion;

public:
    CuentaCorriente(int nCuenta, float saldo, float);
    CuentaCorriente();
    ~CuentaCorriente();
    float getImportePorTransaccion();
    int getTransacciones();
    void obtenerInteres();
    void comision();

    //setters
    void setImportarPorTransaccion(float);
    void setTransacciones(int);

};
inline float CuentaCorriente::getImportePorTransaccion() {
    return this->importePorTransaccion;
}
/*
inline int CuentaCorriente::getTransacciones() {
    return this->transacciones;
}
*/

#endif //TEMPLATECPP_CUENTACORRIENTE_H
