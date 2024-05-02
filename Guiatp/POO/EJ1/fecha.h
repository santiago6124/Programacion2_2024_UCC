class Fecha {
private:
    int dia, mes, anio;

public:
    Fecha(int d, int m, int a);
    Fecha();
    int getDia();
    int getMes();
    int getAnio();
    Fecha operator++();
    Fecha operator--();
    Fecha operator+(int dias);
    Fecha operator-(int dias);
};
