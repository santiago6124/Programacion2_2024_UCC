class NumeroRacional {
private:
    int numerador;
    int denominador;

public:
    NumeroRacional();
    NumeroRacional(int num, int den);
    void setNumerador(int num);
    void setDenominador(int den);
    int getNumerador() const; 
    int getDenominador() const;
    void simplificar();
    NumeroRacional operator+(const NumeroRacional& otro);
    NumeroRacional operator-(const NumeroRacional& otro);
    NumeroRacional operator++();
    NumeroRacional operator--();
    NumeroRacional operator+=(int entero);
    NumeroRacional operator-=(int entero);
    int mcd(int a, int b);
};