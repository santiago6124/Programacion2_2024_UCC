class Complejo {
private:
    double real;
    double imaginario;

public:
    // Constructor predeterminado
    Complejo();

    // Constructor con parámetros
    Complejo(double real, double imaginario);

    // Función para mostrar el número complejo
    void mostrar();

    // Sobrecarga del operador de suma
    Complejo operator+(const Complejo& otro);

    // Sobrecarga del operador de resta
    Complejo operator-(const Complejo& otro);

    // Sobrecarga del operador de multiplicación
    Complejo operator*(const Complejo& otro);

    // Función para calcular el conjugado de un número complejo
    Complejo conjugado();
};