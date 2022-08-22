#ifndef TEMPLATECPP_CUENTA_H
#define TEMPLATECPP_CUENTA_H
#define INTERES 0.1
#define COMISION 0.05

using namespace std;

class Cuenta{

private:

    int nCuentas;
    float saldo;
    float tasaInteres = INTERES;
    int transaccion = 0;

public:

    Cuenta(int, float);
    Cuenta();
    virtual ~Cuenta();
    //getters
    int getNcuentas();
    float getSaldo();
    float getRTasaInteres();
    //setters
    void setNcuentas(int nCuenta);
    void setSaldo(float);
    void setTasaInteres(); //VER
    //servicios
    void deposito(float );
    void extraccion(float );
    int getTransaccion();

    virtual void mostrar();//polimorfismo
    virtual void obtenerInteres(); //polimorfismo
    virtual void comision(); //polimorfismos
};
inline int Cuenta::getTransaccion() {

    return this->transaccion;
}
inline int Cuenta::getNcuentas(){
    return this->nCuentas;
}
inline float Cuenta::getSaldo(){
    return this->saldo;
}
inline float Cuenta::getRTasaInteres(){
    return this->tasaInteres;
}
inline void Cuenta::setTasaInteres() {

    this->tasaInteres = INTERES;

}


#endif //TEMPLATECPP_CUENTA_H
