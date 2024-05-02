class Punto {
private:
    double x;
    double y;

public:
    Punto();
    Punto(double x, double y);

    void operator++(); // Sobrecarga del operador ++
    void operator--(); // Sobrecarga del operador --

    Punto operator+(const Punto& otroPunto) const; // Sobrecarga del operador + para sumar dos puntos
    Punto operator+(int valor) const; // Sobrecarga del operador + para sumar un valor entero a un punto

    Punto operator-(const Punto& otroPunto) const; // Sobrecarga del operador - para restar dos puntos
    Punto operator-(int valor) const; // Sobrecarga del operador - para restar un valor entero a un punto

    void mostrarCoordenadas() const;
    void obtenerCoordenadasPolares() const;
};