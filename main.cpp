/*Se desea diseñar una aplicación para administrar las cuentas corrientes
 * y de ahorro de los clientes de una entidad bancaria. Para ello desarrolle
 * las siguientes clases:

Cuenta
	Atributos: numeroCta, saldo, tasaInteres
	Métodos: Constructor, getCuenta, getSaldo,
 getTasaInteres, deposito, extracción,
 obtenerInteres (calcula el importe correspondiente a los intereses/mes producidos),
 comisiones.

CuentaAhorro
	Atributos: cuotaMantenimiento
	Métodos: Constructor, getCuotaManten, comisiones
 (se aplica por el mantenimiento de la cuenta mensual)

CuentaCorriente
	Atributos: transacciones, importePorTransaccion
	Métodos: Constructor, getTransaccion, getImportePorTransaccion, obtenerInteres
 (calcula el importe correspondiente a los intereses/mes producidos,
 hasta 3000$ al 5%, el resto al interés establecido),
 comisiones (se aplica por las transacciones efectuadas en el mes)

Cada constructor debe permitir inicializar los atributos propios de su clase y
 contendrán valores predeterminados para el caso en que no se suministren
 inicializadores y deberán verificar la consistencia de datos antes de asignar
 valores a los atributos.

Escriba un programa controlador que pruebe la jerarquía de clases y
 muestre para cada cuenta creada: el nro. de cuenta,
 el saldo final y en forma polimórfica: los intereses ganados y las
 comisiones aplicadas al saldo.
*/
#include <iostream>

int main() {

    CuentaAhorro cuenta1(123,1000,10);
    cuenta1.obtenerInteres();
    CuentaCorriente Cuenta2(456,3000,10);
    Cuenta2.obtenerInteres();
    Cuenta2.deposito(2000);
    Cuenta2.extraccion(1000);
    Cuenta2.obtenerInteres();
    Cuenta2.comision();
    Cuenta2.mostrar();


    return 0;
}
