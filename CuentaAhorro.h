#ifndef TEMPLATECPP_CUENTAAHORRO_H
#define TEMPLATECPP_CUENTAAHORRO_H
#include "Cuenta.h"

using namespace std;


class CuentaAhorro : public Cuenta {

private:
    float cuotaMantenimiento;

    public:
    CuentaAhorro(int nCuenta, float saldo,  float);
   // CuentaAhorro(); //capaz que esta de mas
    ~CuentaAhorro();

    //servicios
    float getCuotaMantenimiento();
    void comision();

};
inline float CuentaAhorro::getCuotaMantenimiento() {
    return this->cuotaMantenimiento;
}







#endif //TEMPLATECPP_CUENTAAHORRO_H
