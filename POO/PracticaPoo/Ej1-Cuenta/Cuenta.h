#ifndef CUENTA_H
#define CUENTA_H
#include <string>

class Cuenta {
private:
    std::string titular;
    double cantidad;

public:
    // Constructores
    Cuenta(std::string titular, double cantidad = 0.0);
    // Métodos get y set
    std::string getTitular() const;
    void setTitular(std::string titular);
    double getCantidad() const;
    void setCantidad(double cantidad);
    // Otros métodos
    void ingresar(double cantidad);
    void retirar(double cantidad);
};

#endif // CUENTA_H
