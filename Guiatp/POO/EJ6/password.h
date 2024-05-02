#include <string>

class Password {
private:
    int longitud;
    std::string contrasenia;

public:
    Password();
    Password(int longitud);

    void generarPassword();
    bool esFuerte() const;
    void mostrar() const;
    void cargarLongitud(int longitud);
};